/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structfiller2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 15:13:32 by lramard           #+#    #+#             */
/*   Updated: 2019/02/08 17:02:21 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_zero(t_prin *prin)
{
	int i;
	int	last;

	//printf("ft_zero\n");
	i = prin->i_form;
	last = prin->length + i;
	while (i <= last && !(prin->form[i] >= '1' && prin->form[i] <= '9'))
	{
		if (prin->form[i] == '0')
		{
			prin->zero = 1;
			break ;
		}
		i++;
	}
	return (1);
}

int		ft_minus(t_prin *prin)
{
	int i;
	int	last;

	//printf("ft_minus\n");
	i = prin->i_form;
	last = prin->length + i;
	while (i < (last))
	{
		if (prin->form[i] == '-')
		{
			prin->minus = 1;
			break ;
		}
		i++;
	}
	return (1);
}

int		ft_plus(t_prin *prin)
{
	int i;
	int	last;

	//printf("ft_plus\n");
	i = prin->i_form;
	last = prin->length + i;
	while (i < last)
	{
		if (prin->form[i] == '+')
		{
			prin->plus = 1;
			break ;
		}
		i++;
	}
	return (1);
}
