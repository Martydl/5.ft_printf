/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <lramard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 11:38:25 by lramard           #+#    #+#             */
/*   Updated: 2019/02/18 13:59:07 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_v(t_prin *prin, char k, int i)
{
	if (k == 'F')
		prin->conv = 'F';
	else if (k == 'X')
		prin->conv = 'X';
	else if (k == 'B')
		prin->conv = 'B';
	else if (k == 'G')
		prin->conv = 'G';
	else
	{
		prin->conv = ft_tolower(k);
		prin->form[prin->z + i] = ft_tolower(k);
	}
}

int			ft_counter(t_prin *prin)
{
	char	*converter;
	int		j;
	int		i;
	int		k;

	j = 0;
	i = 1;
	k = 0;
	converter = "dDiIoOuUxXfFcspbBgG%";
	while (j == 0 && prin->form[prin->z + i] != '\0')
	{
		while (prin->form[prin->z + i] != converter[k] && k <= 18)
			k++;
		if (prin->form[prin->z + i] == converter[k])
		{
			(prin->form[prin->z + i] >= 65 && prin->form[prin->z + i] <= 90) ?
				(ft_v(prin, prin->form[prin->z + i], i)) :
					(prin->conv = converter[k]);
			j = 1;
		}
		i++;
		k = 0;
	}
	prin->length = i - 1;
	return (prin->z + i);
}

static int	ft_check(t_prin *prin)
{
	int retu;

	retu = ft_counter(prin);
	if (ft_stopar(prin) != -1)
	{
		if (!(ft_convert(prin)))
			ft_error(prin);
	}
	else
		return (0);
	return (retu);
}

int			ft_parse(t_prin *prin)
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
			ft_reset(prin);
			if ((j = ft_check(prin)) == 0)
				return (-1);
			prin->z = j;
		}
	}
	return (1);
}
