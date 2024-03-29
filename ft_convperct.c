/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convperct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <lramard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 15:01:55 by mde-laga          #+#    #+#             */
/*   Updated: 2019/02/11 18:57:35 by lramard          ###   ########.fr       */
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
		ft_error(prin);
	i = 0;
	if (!prin->min)
		while (--prin->field >= 0)
			ret[i++] = (prin->zero ? '0' : ' ');
	ret[i++] = '%';
	if (prin->min)
		while (--prin->field >= 0)
			ret[i++] = ' ';
	if (!(prin->output = ft_strjfree(prin->output, ret)))
		ft_error(prin);
}
