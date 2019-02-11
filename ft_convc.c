/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <lramard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 12:22:21 by mde-laga          #+#    #+#             */
/*   Updated: 2019/02/11 18:57:35 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convc(t_prin *prin)
{
	char	*ret;
	char	c;
	int		size;
	int		i;

	c = va_arg(prin->ap, int);
	size = (ft_isprint(c) ? 1 : 0);
	if (prin->field)
		size += prin->field--;
	if (!(ret = ft_strnew(size)))
		ft_error(prin);
	i = 0;
	if (!prin->min)
		while (--prin->field >= 0)
			ret[i++] = ' ';
	ft_isprint(c) ? ret[i++] = c : 0;
	if (prin->min)
		while (--prin->field >= 0)
			ret[i++] = ' ';
	prin->output = ft_strjfree(prin->output, ret);
}
