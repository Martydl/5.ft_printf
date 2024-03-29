/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 11:37:46 by lramard           #+#    #+#             */
/*   Updated: 2019/02/11 14:02:17 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_prin	*prin;
	int		retu;

	if (!(prin = (t_prin *)malloc(sizeof(t_prin))))
		return (0);
	va_start(prin->ap, format);
	prin->z = 0;
	prin->ret = 0;
	prin->form = ft_strdup((char *)format);
	if (ft_parse(prin) != 1)
		ft_error(prin);
	ft_putstrplus(prin->output, prin);
	va_end(prin->ap);
	retu = prin->ret;
	ft_free_prin(prin);
	return (retu);
}
