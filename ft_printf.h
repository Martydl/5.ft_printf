/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 13:34:19 by lramard           #+#    #+#             */
/*   Updated: 2019/02/11 10:17:48 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>

typedef struct	s_prin
{
	va_list		ap;
	int			ret;
	char		*output;
	char		*form;
	int64_t		z;
	int			length;
	char		conv;
	int			flags;
	int			hash;
	int			zero;
	int			min;
	int			spac;
	int			plus;
	int			field;
	int			preci;
}				t_prin;

typedef struct	s_fl
{
	int64_t		ret;
	int64_t		front;
	double		back;
	int64_t		bk_l;
	char		*sig;
	char		*mant;
	char		*expo;
	char		*opt;
}				t_fl;

typedef union {
  float flt;
  struct {
    uint32_t mant : 23;
    uint32_t expon : 8;
    uint32_t sign : 1;
  } parts;
} t_flieee;

int				ft_stopar(t_prin *prin);
int				ft_parse(t_prin *prin);
int				ft_length(t_prin *prin);
int				ft_field(t_prin *prin);
int				ft_flags(t_prin *prin);
int				ft_preci(t_prin *prin);
int				ft_spac(t_prin *prin);
int				ft_hash(t_prin *prin);
int				ft_zero(t_prin *prin);
int				ft_minus(t_prin *prin);
int				ft_plus(t_prin *prin);
void			ft_putstrplus(char *s, t_prin *prin);
int				ft_reset(t_prin *prin);
int				ft_convert(t_prin *prin);
void			ft_convert2(t_prin *prin);
void			ft_convperct(t_prin *prin);
int				ft_counter(t_prin *prin);
char			*ft_lltoa(int64_t nb);
void			ft_convd(t_prin *prin);
void			ft_convi(t_prin *prin);
void			ft_convmx(t_prin *prin);
char			*ft_llutoa_base(uint64_t value, int base, int cas);
void			ft_convo(t_prin *prin);
void			ft_convu(t_prin *prin);
void			ft_convx(t_prin *prin);
void			ft_error(t_prin *prin);
int				ft_printf(const char *format, ...);
void			ft_convc(t_prin *prin);
void			ft_convp(t_prin *prin);
void			ft_convs(t_prin *prin);
void			ft_free_prin(t_prin *prin);
void			ft_convf(t_prin *prin);
void			ft_convb(t_prin *prin);
void			ft_rounder(t_fl *fl, int n);
void			ft_separator(t_fl *fl, double value);
void			ft_normiser(t_fl *fl, double value);
int				ft_mantiser(t_fl *fl);

#endif
