/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:01:04 by lramard           #+#    #+#             */
/*   Updated: 2018/11/22 10:31:34 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;

	if (n < 1)
		return (1);
	if (s1 && s2)
	{
		i = 0;
		while (s1[i] && i < n)
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
		if (s2[i] && i < n)
			return (0);
		return (1);
	}
	if ((s1 && !s2) || (!s1 && s2))
		return (0);
	else
		return (1);
}
