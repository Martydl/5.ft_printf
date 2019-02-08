/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:23:35 by lramard           #+#    #+#             */
/*   Updated: 2018/11/29 17:26:15 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *str2)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (str2[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
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
