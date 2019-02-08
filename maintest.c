/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 22:40:09 by lramard           #+#    #+#             */
/*   Updated: 2019/02/08 16:25:06 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(int ac, char **av)
{
	char 	*n;
	int		k = ft_atoi(av[2]);

	n = "louis pue";
	dprintf(1, " %d\n", ft_printf(av[1], av[2]));
	dprintf(1, " %d\n", dprintf(1, av[1], av[2]));
}
