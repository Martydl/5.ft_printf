/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 18:26:00 by mde-laga          #+#    #+#             */
/*   Updated: 2019/02/10 15:31:10 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long long	ft_getnb(t_prin *prin)
{
	unsigned long long ret;

	ret = 0;
	if (prin->flags == 0)
		ret = va_arg(prin->ap, unsigned int);
	else if (prin->flags == 1)
		ret = (short)va_arg(prin->ap, unsigned int);
	else if (prin->flags == 2)
		ret = (char)va_arg(prin->ap, unsigned int);
	else if (prin->flags == 3)
		ret = va_arg(prin->ap, unsigned long);
	else if (prin->flags == 4)
		ret = va_arg(prin->ap, unsigned long long);
	return (ret);
}

static int					ft_size(t_prin *prin, int nlen)
{
	int size;

	size = 0;
	if (prin->hash && nlen >= prin->preci)
		size++;
	if (prin->preci > nlen)
		size += prin->preci - nlen;
	return (size);
}

static char					*ft_prefix(t_prin *prin, char *str)
{
	char	*pre;
	int		size;
	int		nlen;
	int		i;

	nlen = ft_strlen(str);
	size = ft_size(prin, nlen);
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
	if (prin->hash && nlen >= prin->preci)
		pre[i++] = '0';
	if ((!prin->min && prin->zero) || prin->preci)
		while ((!prin->min && --prin->field >= 0) || --prin->preci - nlen >= 0)
			pre[i++] = '0';
	return (pre);
}

static char					*ft_suffix(t_prin *prin, char *ret)
{
	char	*suf;
	int		i;
	int		len;

	i = 0;
	len = (prin->field - ft_strlen(ret));
	if (!(suf = ft_strnew(len)))
		return (NULL);
	while (i < len)
		suf[i++] = ' ';
	ret = ft_strjfree(ret, suf);
	return (ret);
}

void						ft_convo(t_prin *prin)
{
	char				*ret;
	unsigned long long	nb;

	nb = ft_getnb(prin);
	if (prin->preci == -1)
		prin->preci = 1;
	if (!(nb == 0 && prin->preci == 0))
		ret = ft_llutoa_base(nb, 8, 0);
	else
		ret = ft_strnew(0);
	ret = ft_strjfree(ft_prefix(prin, ret), ret);
	if (prin->min && (prin->field > (int)ft_strlen(ret)))
		ret = ft_suffix(prin, ret);
	prin->ret += ft_strlen(ret);
	prin->output = ft_strjfree(prin->output, ret);
}
