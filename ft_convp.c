/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 15:59:30 by mde-laga          #+#    #+#             */
/*   Updated: 2019/02/09 16:01:50 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_getstring(t_prin *prin)
{
	char	*str;
	void	*ptr;

	ptr = va_arg(prin->ap, void*);
	str = ft_strdup("0x");
	str = ft_strjfree(str, ft_llutoa_base((unsigned long long)ptr, 16, 'a'));
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
	if (!prin->min)
		ret = ft_strjfree(add, ret);
	else
		ret = ft_strjfree(ret, add);
	return (ret);
}

void		ft_convp(t_prin *prin)
{
	char	*ret;

	ret = ft_getstring(prin);
	if ((unsigned long)prin->field > ft_strlen(ret))
		ret = ft_add(prin, ret);
	prin->ret += ft_strlen(ret);
	prin->output = ft_strjfree(prin->output, ret);
}
