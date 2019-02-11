/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 22:40:09 by lramard           #+#    #+#             */
/*   Updated: 2019/02/11 17:37:04 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(int ac, char **av)
{
	char 	*n;
	int		k = ft_atoi(av[1]);

	n = "louis pue";
	dprintf(1, " %d\n", ft_printf("%%%G"));
	dprintf(1, " %d\n", dprintf(1, "%%%d", k));
}
