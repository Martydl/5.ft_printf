/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <lramard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 09:48:37 by lramard           #+#    #+#             */
/*   Updated: 2019/02/07 22:58:08 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_error1(t_prin *prin)
{
	printf("ft_error1\n");
	ft_putstr("erreur d\'usage , pourcentage non reconnu");
	ft_reset(prin);
	free(prin);
	exit(0);
}

void	ft_error2(t_prin *prin)
{
	printf("ft_error 2\n");
	ft_putstr("erreur d\'usage , pourcentage non reconnu");
	ft_reset(prin);
	free(prin);
	exit(0);
}

void	ft_error(int k, t_prin *prin)
{
	printf("ft_error\n");
	if (k == 1)
		ft_error1(prin);
	if (k == 2)
		ft_error2(prin);
}
