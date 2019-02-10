/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:29:13 by lramard           #+#    #+#             */
/*   Updated: 2019/02/10 15:50:44 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i[2];
	char	*mem;
	int64_t	nb;

	i[1] = 0;
	nb = n;
	i[0] = ft_numbcounter(n);
	if (n < 0)
		i[0]++;
	if (!(mem = (char *)malloc(sizeof(char) * (i[0] + 1))))
		return (NULL);
	if (nb < 0)
	{
		mem[i[1]] = '-';
		nb *= -1;
		i[1]++;
	}
	while (i[1] < i[0])
	{
		(mem[0] == '-') ? (mem[i[0] - i[1]++] = (nb % 10) + 48) :
				(mem[i[0] - i[1]++ - 1] = (nb % 10) + 48);
		nb /= 10;
	}
	mem[i[1]] = '\0';
	return (mem);
}
