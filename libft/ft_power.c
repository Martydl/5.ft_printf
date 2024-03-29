/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 09:40:53 by lramard           #+#    #+#             */
/*   Updated: 2018/11/22 09:47:07 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int nb, int power)
{
	int	res;

	res = nb;
	if ((nb > 0) && (power >= 0))
	{
		if (power == 0)
			return (1);
		while (power != 1)
		{
			res *= nb;
			power--;
		}
		return (res);
	}
	return (0);
}
