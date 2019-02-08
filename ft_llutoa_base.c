/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llutoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 15:41:32 by mde-laga          #+#    #+#             */
/*   Updated: 2019/02/08 17:02:21 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_llutoa_base(unsigned long long value, int base, int cas)
{
	int					i;
	unsigned long long	tmp;
	char				*str;

	//printf("ft_llutoa_base\n");
	i = 0;
	if (value == 0)
		i = 1;
	tmp = value;
	while (tmp && ++i)
		tmp = tmp / base;
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	tmp = value;
	while (i--)
	{
		str[i] = (tmp % base < 10 ? tmp % base + '0' :
				(tmp % base - 10 + cas));
		tmp = tmp / base;
	}
	return (str);
}
