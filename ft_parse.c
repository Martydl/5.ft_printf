/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 11:38:25 by lramard           #+#    #+#             */
/*   Updated: 2019/02/08 17:02:21 by mde-laga         ###   ########.fr       */
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
	i = prin->i_form;
	k = 0;
	converter = "diouxXfcsp";
	//printf("ft_counter\n");
	while (j == 0 && prin->form[i] != '\0')
	{
		while (prin->form[i] != converter[k] && k <= 9)
			k++;
		if (prin->form[i] == converter[k])
		{
			prin->conv = converter[k];
			j = 1;
		}
		i++;
		k = 0;
	}
	if (prin->conv == 's')
		prin->preci = -1;
	prin->length = i;
	return (i);
}

int	ft_perct(t_prin *prin)
{
	//printf("ft_perct\n");
	if (prin->form[prin->i_form] == '%' && prin->form[prin->i_form + 1] == '%')
	{
		prin->output = ft_strjoin_free(prin->output, ft_strdup("%"));
		return (1);
	}
	return (0);
}

int	ft_check(t_prin *prin)
{
	int retu;

	//printf("ft_check\n");
	retu = ft_counter(prin);
	if (ft_perct(prin) == 1)
		return (2);
	if (ft_stopar(prin) != -1)
	{
		if (!(ft_convert(prin)))
			ft_error(1, prin);
	}
	else
		return (0);
	return (retu);
}

int	ft_parse(t_prin *prin)
{
	int		j;

	j = 0;
	//printf("ft_parse\n");
	prin->output = ft_strnew(0);
	while (prin->form[prin->i_form] != '\0')
	{
		while (prin->form[prin->i_form] != '%' && prin->form[prin->i_form] != '\0')
		{
			prin->output = ft_strjoin_free(prin->output, ft_strndup(prin->form + prin->i_form, 1));
			prin->i_form++;
		}
		if (prin->form[prin->i_form] == '%')
		{
			if (!(ft_reset(prin)))
				ft_error(1, prin);
			if ((j = ft_check(prin)) == 0)
				return (-1);
			prin->i_form = j;
		}
	}
	return (1);
}
