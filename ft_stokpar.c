/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stokpar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 11:45:25 by lramard           #+#    #+#             */
/*   Updated: 2019/02/08 17:02:21 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_conflit(t_prin *prin)
{
	//printf("ft_conflit\n");
	if (prin->minus == 1 && prin->zero == 1)
		prin->zero = 0;
	else if (prin->zero == 1 && prin->preci != 1 && (prin->conv == 'd' ||
				prin->conv == 'i' || prin->conv == 'o' || prin->conv == 'u' ||
					prin->conv == 'x' || prin->conv == 'X'))
		prin->zero = 0;
	else if (prin->plus == 1 && prin->spac == 1)
		prin->spac = 0;
	else if (prin->hash == 1 && prin->preci != 1 && (prin->conv == 'o'))
		prin->hash = 0;
	return (1);
}

int		ft_stopar(t_prin *prin)
{
	//printf("ft_stopar\n");
	//if (!ft_length(prin))
	//	ft_error(1, prin);
	if (!ft_flags(prin))
		ft_error(1, prin);
	if (!ft_preci(prin))
		ft_error(1, prin);
	if (!ft_field(prin))
		ft_error(1, prin);
	if (!ft_spac(prin))
		ft_error(1, prin);
	if (!ft_hash(prin))
		ft_error(1, prin);
	if (!ft_zero(prin))
		ft_error(1, prin);
	if (!ft_minus(prin))
		ft_error(1, prin);
	if (!ft_plus(prin))
		ft_error(1, prin);
	if (!ft_conflit(prin))
		ft_error(1, prin);
	return (1);
}
