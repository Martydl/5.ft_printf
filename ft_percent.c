/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <lramard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 12:12:38 by lramard           #+#    #+#             */
/*   Updated: 2019/02/07 11:19:15 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_percent(const char *format)
{
	char	*str;
	int		i;

	str = (char *)format;
	i = 0;

	while (str[i] != '%')
	{
		i++;
	}
	if (i == (int)ft_strlen(str))
		return (0);
	return (i);
}
