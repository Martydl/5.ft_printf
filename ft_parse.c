/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 11:38:25 by lramard           #+#    #+#             */
/*   Updated: 2019/02/09 16:36:37 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_counter(t_prin *prin)
{
	char	*converter;
	int		j;
	int		i;
	int		k;

	j = 0;
	i = 0;
	k = 0;
	converter = "diouxXfcsp";
	while (j == 0 && prin->form[prin->z + i] != '\0')
	{
		while (prin->form[prin->z + i] != converter[k] && k <= 9)
			k++;
		if (prin->form[prin->z + i] == converter[k])
		{
			prin->conv = converter[k];
			j = 1;
		}
		i++;
		k = 0;
	}
	prin->length = i - 1;
	return (prin->z + i);
}

int	ft_perct(t_prin *prin)
{
	if (prin->form[prin->z] == '%' && prin->form[prin->z + 1] == '%')
	{
		prin->output = ft_strjfree(prin->output, ft_strdup("%"));
		return (1);
	}
	return (0);
}

int	ft_check(t_prin *prin)
{
	int retu;

	retu = ft_counter(prin);
	if (ft_perct(prin) == 1)
		return (2);
	if (ft_stopar(prin) != -1)
	{
		if (!(ft_convert(prin)))
			ft_error(prin);
	}
	else
		return (0);
	return (retu);
}

int	ft_parse(t_prin *prin)
{
	int		j;

	j = 0;
	prin->output = ft_strnew(0);
	while (prin->form[prin->z] != '\0')
	{
		while (prin->form[prin->z] != '%' && prin->form[prin->z] != '\0')
		{
			prin->output =
				ft_strjfree(prin->output, ft_strndup(prin->form + prin->z, 1));
			prin->z++;
		}
		if (prin->form[prin->z] == '%')
		{
			if (!(ft_reset(prin)))
				ft_error(prin);
			if ((j = ft_check(prin)) == 0)
				return (-1);
			prin->z = j;
		}
	}
	return (1);
}
