/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 15:58:36 by lramard           #+#    #+#             */
/*   Updated: 2019/02/10 20:40:02 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_rec(t_fl *fl, char *str, int i)
{
	if (str[i] == '9')
	{
		str[i] = '0';
		if (i == 0)
			fl->front++;
		ft_rec(fl, str, i - 1);
	}
	else
		str[i]++;
}

void	ft_rdr2(t_fl *fl, char *str, int i)
{
	if (str[i] == '9')
		ft_rec(fl, str, i);
	else if (str[i] >= '5' && str[i] < '9')
		str[i]++;
}

void	ft_rounder(t_fl *fl, int n)
{
	int		i;
	int64_t	tmp;
	int64_t	ret;
	char	*tmp2;

	i = 0;
	tmp = 0;
	ret = 0;
	tmp2 = ft_strnew(0);
	while (i < n + 1)
	{
		fl->back *= 10;
		tmp = ((int)fl->back % 10);
		ret = tmp;
		tmp2 = ft_strjfree(tmp2, ft_itoa(ret));
		ret = 0;
		fl->back -= ((int)fl->back % 10);
		i++;
	}
	ft_rdr2(fl, tmp2, ft_strlen(tmp2) - 1);
	fl->opt = ft_strndup(tmp2, ft_strlen(tmp2) - 1);
	free(tmp2);
}

int		ft_mantiser(t_fl *fl)
{
	int ex;
	int man;
	int i;

	i = 0;
	ex = 0;
	man = 0;
	while (fl->expo[i] != '\0')
	{
		if (fl->expo[i] == '0')
			ex++;
		i++;
	}
	i = 0;
	while (fl->mant[i] != '\0')
	{
		if (fl->mant[i] == '1')
			man++;
		i++;
	}
	if (ex == 0 && man == 0)
		return (1);
	else if (ex == 0 && man == 1)
		return (2);
	else
		return (0);
}

void	ft_normiser(t_fl *fl, double value)
{
	char		*sig;
	char		*ex;
	char		*mts;
	t_flieee	*k;

	if (!(k = (t_flieee*)malloc(sizeof(t_flieee))))
		return ;
	k->flt = value;
	sig = ft_itoa(k->parts.sign);
	ex = ft_itoa(k->parts.expon);
	mts = ft_itoa(k->parts.mant);
	fl->sig = ft_convert_base(sig, "0123456789", "01");
	fl->mant = ft_convert_base(mts, "0123456789", "01");
	fl->expo = ft_convert_base(ex, "0123456789", "01");
}

void	ft_separator(t_fl *fl, double value)
{
	double fr;
	double bk;

	fr = value / 1;
	bk = value - ((int64_t)value);
	fl->front = (int64_t)fr;
	fl->back = bk;
}

void	ft_convf(t_prin *prin)
{
	t_fl	*fl;
	double	value;
	int		mant;

	if (prin->preci == -1)
		prin->preci = 6;
	if (!(fl = (t_fl *)malloc(sizeof(t_fl))))
		ft_error(prin);
	value = va_arg(prin->ap, double);
	ft_separator(fl, value);
	ft_normiser(fl, value);
	ft_rounder(fl, prin->preci);
	mant = ft_mantiser(fl);
	if (mant == 1)
		prin->output = ft_strjfree(prin->output, "infini");
	else if (mant == 2)
		prin->output = ft_strjfree(prin->output, "NaN");
	else
	{
		prin->output = ft_strjfree(prin->output, ft_lltoa(fl->front));
		prin->output = ft_strjfree(prin->output, ft_strdup("."));
		prin->output = ft_strjfree(prin->output, fl->opt);
	}
}
