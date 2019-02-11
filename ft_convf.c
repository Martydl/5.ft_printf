/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 15:58:36 by lramard           #+#    #+#             */
/*   Updated: 2019/02/11 10:47:56 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long double	ft_getnb(t_prin *prin)
{
	long double ret;

	ret = 0;
	if (prin->flags == 0)
		ret = va_arg(prin->ap, double);
	if (prin->flags == 5)
		ret = va_arg(prin->ap, long double);
	return (ret);
}

void	ft_convf(t_prin *prin)
{
	t_fl	*fl;
	double	value;
	int		mant;

	if (prin->preci == -1)
		prin->preci = 6;
	if (!(fl = (t_fl *)malloc(sizeof(t_fl))))
		ft_error(prin);
	value = ft_getnb(prin);
	ft_separator(fl, value);
	ft_normiser(fl, value);
	ft_rounder(fl, prin->preci);
	mant = ft_mantiser(fl);
	if (mant == 1)
		prin->output = ft_strjfree(prin->output, "infini");
	else if (mant == 2)
		prin->output = ft_strjfree(prin->output, "NaN");
	else
	{
		prin->output = ft_strjfree(prin->output, ft_lltoa(fl->front));
		prin->output = ft_strjfree(prin->output, ft_strdup("."));
		prin->output = ft_strjfree(prin->output, fl->opt);
	}
}
