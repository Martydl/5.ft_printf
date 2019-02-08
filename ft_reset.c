/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <lramard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:46:47 by lramard           #+#    #+#             */
/*   Updated: 2019/02/07 22:57:39 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_reset(t_prin *prin)
{
	printf("ft_reset\n");
	prin->flags = 0;
	prin->preci = 1;
	prin->field = 0;
	prin->spac = 0;
	prin->hash = 0;
	prin->zero = 0;
	prin->minus = 0;
	prin->plus = 0;
	prin->length = 0;
	return (1);
}
