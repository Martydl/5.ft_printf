/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 14:16:44 by mde-laga          #+#    #+#             */
/*   Updated: 2019/02/08 16:45:18 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_getstring(t_prin *prin)
{
	char	*str;
	char	*tmp;

	tmp = va_arg(prin->ap, char*);
	if (prin->preci >= 0)
		str = ft_strndup(tmp, prin->preci);
	else
		str = ft_strdup(tmp);
	return (str);
}

static char	*ft_add(t_prin *prin, char *ret)
{
	char	*add;

	prin->field -= ft_strlen(ret);
	if (!(add = ft_strnew(prin->field)))
		return (NULL);
	while (--prin->field >= 0)
		add[prin->field] = ' ';
	if (!prin->minus)
		ret = ft_strjoin_free(add, ret);
	else
		ret = ft_strjoin_free(ret, add);
	return (ret);
}

void	ft_convs(t_prin *prin)
{
	char	*ret;

	printf("ft_convs\n");
	ret = ft_getstring(prin);
	if (prin->field > (int)ft_strlen(ret))
		ret = ft_add(prin, ret);
	prin->ret += ft_strlen(ret);
	prin->output = ft_strjoin_free(prin->output, ret);
}
