/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:46:47 by lramard           #+#    #+#             */
/*   Updated: 2019/02/09 16:04:51 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_reset(t_prin *prin)
{
	prin->flags = 0;
	prin->preci = -1;
	prin->field = 0;
	prin->spac = 0;
	prin->hash = 0;
	prin->zero = 0;
	prin->min = 0;
	prin->plus = 0;
	prin->length = 0;
	return (1);
}
