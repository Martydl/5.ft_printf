/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <lramard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:09:25 by mde-laga          #+#    #+#             */
/*   Updated: 2019/02/07 23:00:54 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long long	ft_getnb(t_prin *prin)
{
	unsigned long long ret;

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

static int				ft_size(t_prin *prin, int nlen)
{
	int size;

	size = 0;
	if (prin->hash == 1)
		size += 2;
	if (prin->preci > nlen)
		size += prin->preci - nlen;
	return (size);
}

static char				*ft_prefix(t_prin *prin, char *str)
{
	char	*pre;
	int		size;
	int		nlen;
	int		i;

	nlen = ft_strlen(str);
	size = ft_size(prin, nlen);
	if (!prin->minus && prin->field > size + nlen && (prin->field -= size + nlen))
		size += prin->field;
	else if (!prin->minus)
		prin->field = 0;
	if (!(pre = ft_strnew(size)))
		return (NULL);
	i = 0;
	if (!prin->minus && !prin->zero)
		while (--prin->field >= 0)
			pre[i++] = ' ';
	if (prin->hash && (i += 2))
		ft_strcpy(pre + i - 2, "0x");
	if ((!prin->minus && prin->zero) || prin->preci)
		while ((!prin->minus && --prin->field >= 0) || --prin->preci - nlen >= 0)
			pre[i++] = '0';
	return (pre);
}

static char				*ft_suffix(t_prin *prin, char *ret)
{
	char	*suf;
	int		i;
	int		len;

	i = 0;
	len = prin->field - ft_strlen(ret);
	if (!(suf = ft_strnew(len)))
		return (NULL);
	while (i < len)
		suf[i++] = ' ';
	ret = ft_strjoin_free(ret, suf);
	return (ret);
}

void					ft_convx(t_prin *prin)
{
	char				*ret;
	unsigned long long	nb;
printf("ft_convx\n");
	nb = ft_getnb(prin);
	if (!(nb == 0 && prin->preci == 0))
		ret = ft_llutoa_base(nb, 16, 'a');
	else
		ret = ft_strnew(0);
	ret = ft_strjoin_free(ft_prefix(prin, ret), ret);
	if (prin->minus && prin->field > (int)ft_strlen(ret))
		ret = ft_suffix(prin, ret);
	prin->ret += ft_strlen(ret);
	prin->output = ft_strjoin_free(prin->output, ret);
}