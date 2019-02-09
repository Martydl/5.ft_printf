/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 11:29:50 by lramard           #+#    #+#             */
/*   Updated: 2019/02/09 16:09:36 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_convert(t_prin *prin)
{
	if (prin->conv == 'd')
		ft_convd(prin);
	else if (prin->conv == 'i')
		ft_convi(prin);
	else if (prin->conv == 'o')
		ft_convo(prin);
	else if (prin->conv == 'u')
		ft_convu(prin);
	else if (prin->conv == 'x')
		ft_convx(prin);
	else if (prin->conv == 'X')
		ft_convmx(prin);
//	else if (prin->conv == 'f')
//		ft_convf(prin);
	else if (prin->conv == 'c')
		ft_convc(prin);
	else if (prin->conv == 's')
		ft_convs(prin);
	else if (prin->conv == 'p')
		ft_convp(prin);
	return (1);
}
