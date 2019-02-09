/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 15:43:34 by lramard           #+#    #+#             */
/*   Updated: 2019/02/09 16:08:22 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long long	ft_getnb(t_prin *prin)
{
	long long ret;

	ret = 0;
	if (prin->flags == 0)
		ret = va_arg(prin->ap, int);
	else if (prin->flags == 1)
		ret = (short)va_arg(prin->ap, int);
	else if (prin->flags == 2)
		ret = (char)va_arg(prin->ap, int);
	else if (prin->flags == 3)
		ret = va_arg(prin->ap, long);
	else if (prin->flags == 4)
		ret = va_arg(prin->ap, long long);
	return (ret);
}

static int			ft_size(t_prin *prin, long long nb, int nlen)
{
	int size;

	size = 0;
	if (nb < 0)
		size++;
	if (nb >= 0 && (prin->plus || prin->spac))
		size++;
	if (prin->preci > nlen)
		size += prin->preci - nlen;
	return (size);
}

static char			*ft_prefix(t_prin *prin, long long nb, char *str)
{
	char	*pre;
	int		size;
	int		nlen;
	int		i;

	nlen = ft_strlen(str);
	size = ft_size(prin, nb, nlen);
	if (!prin->min && prin->field > size + nlen && (prin->field -= size + nlen))
		size += prin->field;
	else if (!prin->min)
		prin->field = 0;
	if (!(pre = ft_strnew(size)))
		return (NULL);
	i = 0;
	if (!prin->min && !prin->zero)
		while (--prin->field >= 0)
			pre[i++] = ' ';
	nb < 0 ? pre[i++] = '-' : 0;
	prin->spac && nb >= 0 ? pre[i++] = ' ' : 0;
	prin->plus && nb >= 0 ? pre[i++] = '+' : 0;
	if ((!prin->min && prin->zero) || prin->preci)
		while ((!prin->min && --prin->field >= 0) || --prin->preci - nlen >= 0)
			pre[i++] = '0';
	return (pre);
}

static char			*ft_suffix(t_prin *prin, char *ret)
{
	char		*suf;
	int			i;
	long long	len;

	i = 0;
	len = prin->field - ft_strlen(ret);
	if (!(suf = ft_strnew(len)))
		return (NULL);
	while (i < len)
		suf[i++] = ' ';
	ret = ft_strjfree(ret, suf);
	return (ret);
}

void				ft_convd(t_prin *prin)
{
	char		*ret;
	long long	nb;

	nb = ft_getnb(prin);
	if (prin->preci == -1)
		prin->preci = 1;
	if (!(nb == 0 && prin->preci == 0))
		ret = ft_lltoa(nb > 0 ? nb : -nb);
	else
		ret = ft_strnew(0);
	ret = ft_strjfree(ft_prefix(prin, nb, ret), ret);
	if (prin->min && prin->field > (int)ft_strlen(ret))
		ret = ft_suffix(prin, ret);
	prin->ret += ft_strlen(ret);
	prin->output = ft_strjfree(prin->output, ret);
}
