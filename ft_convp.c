/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 15:59:30 by mde-laga          #+#    #+#             */
/*   Updated: 2019/02/11 14:04:28 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_getstring(t_prin *prin)
{
	char	*str;
	void	*ptr;

	ptr = va_arg(prin->ap, void*);
	if (!(str = ft_strdup("0x")))
		ft_error(prin);
	if (!(str = ft_strjfree(str, ft_llutoa_base((uint64_t)ptr, 16, 'a'))))
		ft_error(prin);
	return (str);
}

static char	*ft_add(t_prin *prin, char *ret)
{
	char	*add;

	prin->field -= ft_strlen(ret);
	if (!(add = ft_strnew(prin->field)))
		ft_error(prin);
	while (--prin->field >= 0)
		add[prin->field] = ' ';
	if (!prin->min && (!(ret = ft_strjfree(add, ret))))
		ft_error(prin);
	else if (!(ret = ft_strjfree(ret, add)))
		ft_error(prin);
	return (ret);
}

void		ft_convp(t_prin *prin)
{
	char	*ret;

	ret = ft_getstring(prin);
	if ((uint64_t)prin->field > ft_strlen(ret))
		ret = ft_add(prin, ret);
	prin->ret += ft_strlen(ret);
	if (!(prin->output = ft_strjfree(prin->output, ret)))
		ft_error(prin);
}
