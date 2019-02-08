/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:02:34 by mde-laga          #+#    #+#             */
/*   Updated: 2019/02/08 17:02:21 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_len(long long nb)
{
	int len;

	len = 0;
	if (nb < 0)
		len++;
	while (nb / 10 && (nb /= 10))
		len++;
	return (len + 1);
}

void	ft_recur(char *str, long long nb, int i)
{
	int neg;

	neg = (nb < 0 ? -1 : 1);
	if (nb / 10)
		ft_recur(str, nb / 10, i - 1);
	str[i] = nb % 10 * neg + '0';
}

char	*ft_lltoa(long long nb)
{
	char	*str;
	int		i;
	
	//printf("ft_lltoa\n");
	i = ft_len(nb);
	if (!(str = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	str[i] = '\0';
	if (nb < 0)
		str[0] = '-';
	ft_recur(str, nb, i - 1);
	return (str);
}
