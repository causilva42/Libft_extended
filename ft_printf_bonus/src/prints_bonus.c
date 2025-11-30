/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: causilva <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:35:48 by causilva          #+#    #+#             */
/*   Updated: 2025/05/26 12:59:45 by causilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	print_c(unsigned char c, t_flags flags)
{
	return (print_buffer(&c, 1, flags));
}

int	print_s(char *s, t_flags flags)
{
	int	len;

	if (!s)
	{
		if (flags.point >= 6)
			return (print_buffer("(null)", 6, flags));
		return (print_buffer("", 0, flags));
	}
	len = ft_strlen(s);
	if (flags.bool_point && flags.point < len)
		len = flags.point;
	return (print_buffer(s, len, flags));
}

int	print_p(void *ptr, t_flags flags)
{
	if (!ptr)
		return (print_buffer("(nil)", 5, flags));
	flags.bool_hashtag = 1;
	flags.type = 'x';
	return (print_luhex((unsigned long ) ptr, flags));
}

int	print_li(long n, t_flags flags)
{
	t_num_format	info;

	info.num_len = get_num_len((n * (n > 0) - n * (n < 0)), 10);
	ft_strcpy(info.extra, "");
	if (n < 0)
		ft_strcpy(info.extra, "-");
	else if (flags.bool_plus)
		ft_strcpy(info.extra, "+");
	else if (flags.bool_space)
		ft_strcpy(info.extra, " ");
	info.zeros = 0;
	if (flags.bool_point)
		info.zeros = flags.point - info.num_len;
	else if (flags.bool_zero)
		info.zeros = flags.num - info.num_len - ft_strlen(info.extra);
	info.zeros *= (info.zeros > 0);
	info.blanks = flags.num - info.num_len - ft_strlen(info.extra) - info.zeros;
	info.blanks *= (info.blanks > 0);
	return (print_num((n * (n > 0) - n * (n < 0)), info, flags));
}

int	print_luhex(unsigned long n, t_flags flags)
{
	t_num_format	info;

	info.num_len = get_num_len(n, 16);
	ft_strcpy(info.extra, "");
	if (n != 0 && flags.bool_hashtag && flags.type == 'x')
		ft_strcpy(info.extra, "0x");
	else if (n != 0 && flags.bool_hashtag && flags.type == 'X')
		ft_strcpy(info.extra, "0X");
	info.zeros = 0;
	if (flags.bool_point)
		info.zeros = flags.point - info.num_len;
	else if (flags.bool_zero)
		info.zeros = flags.num - info.num_len - ft_strlen(info.extra);
	info.zeros *= (info.zeros > 0);
	info.blanks = flags.num - info.num_len - ft_strlen(info.extra) - info.zeros;
	info.blanks *= (info.blanks > 0);
	return (print_num(n, info, flags));
}
