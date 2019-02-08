/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 11:37:46 by lramard           #+#    #+#             */
/*   Updated: 2019/02/08 11:59:19 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	printf("hello\n");
	t_prin  *prin;

	if (!(prin = (t_prin *)malloc(sizeof(t_prin))))
		return (0);
	va_start(prin->ap, format);
	prin->i_form = 0;
	prin->form = ft_strdup((char *)format);
	if (ft_parse(prin) != 1)
		ft_error(1, prin);
	ft_putstrplus(prin->output, prin);
	free(prin->form);
	free(prin);
	va_end(prin->ap);
	return (prin->ret);
}
