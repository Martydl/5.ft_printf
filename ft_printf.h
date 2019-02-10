/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 13:34:19 by lramard           #+#    #+#             */
/*   Updated: 2019/02/10 13:13:53 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_prin
{
	va_list		ap;
	int			ret;
	char		*output;
	char		*form;
	long		z;
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
	long		ret;
	long		front;
	double		back;
	long		bk_l;

	char		*sig;
	char		*mant;
	char		*expo;
}				t_fl;

typedef union {
  float flt;
  struct {
    unsigned int mant : 23;
    unsigned int expon : 8;
    unsigned int sign : 1;
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
int				ft_percent(const char *format);
int				ft_counter(t_prin *prin);
char			*ft_lltoa(long long nb);
void			ft_convd(t_prin *prin);
void			ft_convi(t_prin *prin);
void			ft_convmx(t_prin *prin);
char			*ft_llutoa_base(unsigned long long value, int base, int cas);
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

#endif
