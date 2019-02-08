/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structfiller.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 15:13:37 by lramard           #+#    #+#             */
/*   Updated: 2019/02/08 16:04:56 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_flags(t_prin *prin)
{
	int i;
	int last;
	int found;

	printf("ft_flags\n");
	found = 0;
	i = prin->i_form;
	last = prin->length;
	last += i;
	while (i <= last)
	{
		if (prin->form[i] == 'h' && prin->form[i + 1] != 'h')
		{
			prin->flags = 1;
			found++;
		}
		if (prin->form[i] == 'h' && prin->form[i + 1] == 'h')
		{
			prin->flags = 2;
			found++;
			i++;
		}
		if (prin->form[i] == 'l' && prin->form[i + 1] != 'l')
		{
			prin->flags = 3;
			found++;
		}
		if (prin->form[i] == 'l' && prin->form[i + 1] == 'l')
		{
			prin->flags = 4;
			found++;
			i++;
		}
		if (prin->form[i] == 'L')
		{
			prin->flags = 5;
			found++;
		}
		i++;
	}
	if (found > 1)
		return (0);
	return (1);
}

int		ft_preci(t_prin *prin)
{
	int		i;
	char	*str;

	i = 1;
	while (i < prin->length && prin->form[prin->i_form + i] != '.')
		i++;
	if (i < prin->length)
	{
		str = ft_strnew(0);
		i++;
		while (ft_isdigit(prin->form[prin->i_form + i]) == 1)
		{
			str = ft_strjoin_free(str, ft_strndup(prin->form + prin->i_form + i, 1));
			i++;
		}
		prin->preci = ft_atoi(str);
		free(str);
		if (prin->form[prin->i_form + i] != prin->conv)
			return (0);
	}
	return (1);
}

int		ft_field(t_prin *prin)
{
	int		i;
	char	*str;

	i = 1;
	while (i < prin->length && !(ft_isdigit(prin->form[prin->i_form + i]) || prin->form[prin->i_form + i] == '0') && prin->form[prin->i_form + i] != '.')
		i++;
	if (i < prin->length && prin->form[prin->i_form + i] != '.')
	{
		str = ft_strnew(0);
		while (ft_isdigit(prin->form[prin->i_form + i]) == 1)
		{
			str = ft_strjoin_free(str, ft_strndup(prin->form + prin->i_form + i, 1));
			i++;
		}
		prin->field = ft_atoi(str);
		free(str);
		if (prin->form[prin->i_form + i] != prin->conv && prin->form[prin->i_form + i] != '.')
			return (0);
	}
	return (1);
}

int		ft_spac(t_prin *prin)
{
	int i;
	int last;

	printf("ft_spac\n");
	i = prin->i_form;
	last = prin->length + i;
	while (i < last)
	{
		if (prin->form[i] == ' ')
		{
			prin->spac = 1;
			break ;
		}
		i++;
	}
	return (1);
}

int		ft_hash(t_prin *prin)
{
	int i;
	int	last;

	printf("ft_hash\n");
	i = prin->i_form;
	last = prin->length + i;
	while (i < last)
	{
		if (prin->form[i] == '#')
		{
			prin->hash = 1;
			break ;
		}
		i++;
	}
	return (1);
}
