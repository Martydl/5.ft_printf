/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 09:49:01 by lramard           #+#    #+#             */
/*   Updated: 2019/02/11 14:17:00 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_convg2(void)
{
	ft_putendl("   ▏┈▏▏         ");
	ft_putendl("   ▏┈▏▏         ");
	ft_putendl("   ▏┈▏▏         ");
	ft_putendl("   ▏┈▏╲         ");
	ft_putendl("   ▏┈▇▇▏        Julien La giraffe");
	ft_putendl("   ▇▇▇▔         ");
}

void		ft_convg(t_prin *prin)
{
	prin->ret += 581;
	ft_putendl("     ▍▕▍        ");
	ft_putendl("╱▔▔╲╱▔▔▔▔╲       ");
	ft_putendl("╲▔▔╲   ▔▔╲╲      ");
	ft_putendl(" ▔▔▔▏▍ ╲▉╱ ╲        ___________________");
	ft_putendl("    ▉ˢᶤ.    ▔▔╲   /                     \\");
	ft_putendl("    ▏▉▕▉    ╰━━▏ <  Hey gros, printf EZ  |");
	ft_putendl("    ▉▕▉▕▔▔▔╲▂▂╱   \\                      /  ");
	ft_putendl("    ▉▕▉▕           ▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔ ");
	ft_putendl("    ▏▉▕▉        ");
	ft_putendl("    ▉▕▉▕        ");
	ft_putendl("    ▏▉▕▉        ");
	ft_putendl("    ▉▕▉▕        ");
	ft_putendl("    ▏▉▕▉        ");
	ft_putendl("    ▉▕▉▕        ");
	ft_putendl("▂▂▂╱▉▕▉▕        ");
	ft_putendl("▏▉▕▉▏▉▕▉        ");
	ft_putendl("▉▕▉▕▉  ▕        ");
	ft_putendl("       ▕        ");
	ft_putendl("       ▕        ");
	ft_putendl("       ╱        ");
	ft_putendl("▂▂▂   ╱         ");
	ft_convg2();
}
