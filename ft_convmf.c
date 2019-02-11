/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convmf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 15:58:36 by lramard           #+#    #+#             */
/*   Updated: 2019/02/11 14:08:48 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long double	ft_getnb(t_prin *prin)
{
	long double ret;

	ret = 0;
	if (prin->flags == 0)
		ret = va_arg(prin->ap, double);
	if (prin->flags == 5)
		ret = va_arg(prin->ap, long double);
	return (ret);
}

static int			ft_size(t_prin *prin, int neg)
{
	int size;

	size = 0;
	if (neg)
		size++;
	if (!neg && (prin->plus || prin->spac))
		size++;
	return (size);
}

static char			*ft_prefix(t_prin *prin, char *str, int neg)
{
	char	*pre;
	int		size;
	int		nlen;
	int		i;

	nlen = ft_strlen(str);
	size = ft_size(prin, neg);
	if (!prin->min && prin->field > size + nlen && (prin->field -= size + nlen))
		size += prin->field;
	else if (!prin->min)
		prin->field = 0;
	if (!(pre = ft_strnew(size)))
		ft_error(prin);
	i = 0;
	if (!prin->min && !prin->zero)
		while (--prin->field >= 0)
			pre[i++] = ' ';
	neg ? pre[i++] = '-' : 0;
	prin->spac && !neg ? pre[i++] = ' ' : 0;
	prin->plus && !neg ? pre[i++] = '+' : 0;
	if (!prin->min && prin->zero)
		while (!prin->min && --prin->field >= 0)
			pre[i++] = '0';
	return (pre);
}

static char			*ft_suffix(t_prin *prin, char *ret)
{
	char	*suf;
	int		i;
	int		len;

	i = 0;
	len = prin->field - ft_strlen(ret);
	if (!(suf = ft_strnew(len)))
		ft_error(prin);
	while (i < len)
		suf[i++] = ' ';
	if (!(ret = ft_strjfree(ret, suf)))
		ft_error(prin);
	return (ret);
}

void				ft_convmf(t_prin *prin)
{
	t_fl		*fl;
	char		*ret;
	long double	value;
	int			mant;
	int			neg;

	if (prin->preci == -1)
		prin->preci = 6;
	if (!(fl = (t_fl *)malloc(sizeof(t_fl))))
		ft_error(prin);
	value = ft_getnb(prin);
	neg = 0;
	if (value < 0)
	{
		value *= -1;
		neg = 1;
	}
	ft_separator(fl, value);
	ft_normiser(fl, value);
	ft_rounder(fl, prin->preci);
	mant = ft_mantiser(fl);
	if (mant == 1)
		prin->output = ft_strjfree(prin->output, "INFINITY");
	else if (mant == 2)
		prin->output = ft_strjfree(prin->output, "NAN");
	else
	{
		ret = ft_strnew(0);
		ret = ft_strjfree(ret, ft_lltoa(fl->front));
		if (prin->preci || prin->hash)
			ret = ft_strjfree(ret, ft_strdup("."));
		ret = ft_strjfree(ret, fl->opt);
		ret = ft_strjfree(ft_prefix(prin, ret, neg), ret);
		if (prin->min && prin->field > (int)ft_strlen(ret))
			ret = ft_suffix(prin, ret);
		prin->output = ft_strjfree(prin->output, ret);
	}
	free(fl->sig);
	free(fl->mant);
	free(fl->expo);
	free(fl);
}
