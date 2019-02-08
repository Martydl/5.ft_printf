/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrplus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 12:12:49 by lramard           #+#    #+#             */
/*   Updated: 2019/02/08 17:02:21 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstrplus(char *s, t_prin *prin)
{
	//printf("ft_putstrplus\n");
	int i;
	i = 0;

	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	prin->ret = i;
}

