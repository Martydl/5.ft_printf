/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convperct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 15:01:55 by mde-laga          #+#    #+#             */
/*   Updated: 2019/02/10 17:24:21 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convperct(t_prin *prin)
{
	char	*ret;
	int		size;
	int		i;

	size = 1;
	if (prin->field)
		size += prin->field--;
	if (!(ret = ft_strnew(size)))
		return ;
	i = 0;
	if (!prin->min)
		while (--prin->field >= 0)
			ret[i++] = (prin->zero ? '0' : ' ');
	ret[i++] = '%';
	if (prin->min)
		while (--prin->field >= 0)
			ret[i++] = ' ';
	prin->ret += ft_strlen(ret);
	prin->output = ft_strjfree(prin->output, ret);
}
