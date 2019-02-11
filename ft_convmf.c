/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convmf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 15:58:36 by lramard           #+#    #+#             */
/*   Updated: 2019/02/11 17:31:20 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long double	ft_getnb(t_prin *prin)
{
	long double ret;

	ret = 0;
	if (prin->flags == 0)
		ret = va_arg(prin->ap, double);
	if (prin->flags == 5)
		ret = va_arg(prin->ap, long double);
	return (ret);
}

void				ft_convmf(t_prin *prin)
{
	t_fl		*fl;
	long double	value;
	int			mant;
	int			neg;

	prin->preci == -1 ? prin->preci = 6 : 0;
	if (!(fl = (t_fl *)malloc(sizeof(t_fl))))
		ft_error(prin);
	value = ft_getnb(prin);
	neg = 0;
	value < 0 && (value *= -1) ? neg = 1 : 0;
	ft_separator(fl, value);
	ft_normiser(fl, value);
	ft_rounder(fl, prin->preci);
	mant = ft_mantiser(fl);
	if (mant == 1)
		prin->output = ft_strjfree(prin->output, "INFINITY");
	else if (mant == 2)
		prin->output = ft_strjfree(prin->output, "NAN");
	else
		ft_convf2(prin, fl, neg);
	free(fl->sig);
	free(fl->mant);
	free(fl->expo);
	free(fl);
}
