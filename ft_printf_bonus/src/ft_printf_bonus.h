/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: causilva <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:36:23 by causilva          #+#    #+#             */
/*   Updated: 2025/05/26 12:53:06 by causilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include "../lib/lib.h"

# define BASE_DEC "0123456789"
# define BASE_LHEX "0123456789abcdef"
# define BASE_UHEX "0123456789ABCDEF"

typedef struct s_iocount
{
	int	read;
	int	printed;
}	t_iocount;

typedef struct s_flags
{
	int		bool_minus;
	int		bool_zero;
	int		bool_hashtag;
	int		bool_space;
	int		bool_plus;
	int		num;
	int		bool_point;
	int		point;
	char	type;
}	t_flags;

typedef struct s_num_format
{
	int		num_len;
	char	extra[3];
	int		zeros;
	int		blanks;
}	t_num_format;

//----------------------------------------------
//---------------FT_PRINTF_BONUS.C--------------
//----------------------------------------------
int			ft_printf(const char *format, ...);
t_iocount	choose_print(const char *s, va_list *args);
t_iocount	print_pure(const char *s);

//----------------------------------------------
//--------------FILL_FLAGS_BONUS.C--------------
//----------------------------------------------
int			fill_flags(t_flags *flags, const char *s);
void		set_zero(t_flags *flags);
void		set_bool_flag(t_flags *flags, char c);
int			readstr_atoi(const char *s, int *num);

//----------------------------------------------
//----------------PRINTS_BONUS.C----------------
//----------------------------------------------
int			print_c(unsigned char c, t_flags	flags);
int			print_s(char *s, t_flags	flags);
int			print_p(void *ptr, t_flags	flags);
int			print_li(long n, t_flags flags);
int			print_luhex(unsigned long n, t_flags flags);

//----------------------------------------------
//------------PRINTS_HELPERS_BONUS.C------------
//----------------------------------------------
int			print_buffer(const void *buf, int n, t_flags flags);
int			print_num(unsigned long n, t_num_format info, t_flags flags);
int			print_lubase(unsigned long n, const char *base);
int			print_nchars(int n, char c);
int			get_num_len(unsigned long n, int base_len);

#endif