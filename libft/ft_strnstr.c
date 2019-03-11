/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 15:59:02 by lramard           #+#    #+#             */
/*   Updated: 2019/02/10 15:49:21 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str2, size_t size)
{
	uint32_t i;
	uint32_t j;

	i = 0;
	j = 0;
	if (str2[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && (i < size))
	{
		if (str[i] != str2[j] && j > 0)
		{
			i = i - j + 1;
			j = 0;
		}
		if (str[i] == str2[j])
			j++;
		i++;
		if (j == ft_strlen((char *)str2))
			return ((char *)&str[i - j]);
	}
	return (NULL);
}
