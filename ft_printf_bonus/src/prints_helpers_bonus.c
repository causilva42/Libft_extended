/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints_helpers_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: causilva <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:13:43 by causilva          #+#    #+#             */
/*   Updated: 2025/05/26 12:52:59 by causilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	print_buffer(const void *buf, int n, t_flags flags)
{
	int	write_return[3];

	write_return[0] = print_nchars((flags.num - n) * (!flags.bool_minus), ' ');
	if (write_return[0] < 0)
		return (write_return[0]);
	write_return[1] = write(1, buf, n);
	if (write_return[1] < 0)
		return (write_return[1]);
	write_return[2] = print_nchars((flags.num - n) * (flags.bool_minus), ' ');
	if (write_return[2] < 0)
		return (write_return[2]);
	return (write_return[0] + write_return[1] + write_return[2]);
}

int	print_num(unsigned long n, t_num_format info, t_flags flags)
{
	char	*base;
	int		write_return[5];

	base = BASE_DEC;
	if (flags.type == 'x')
		base = BASE_LHEX;
	else if (flags.type == 'X')
		base = BASE_UHEX;
	write_return[0] = print_nchars(info.blanks * (!flags.bool_minus), ' ');
	if (write_return[0] < 0)
		return (write_return[0]);
	write_return[1] = write(1, info.extra, ft_strlen(info.extra));
	if (write_return[1] < 0)
		return (write_return[1]);
	write_return[2] = print_nchars(info.zeros, '0');
	if (write_return[2] < 0)
		return (write_return[2]);
	write_return[3] = print_lubase(n, base);
	if (write_return[3] < 0)
		return (write_return[3]);
	write_return[4] = print_nchars(info.blanks * flags.bool_minus, ' ');
	if (write_return[4] < 0)
		return (write_return[4]);
	write_return[1] += write_return[2] + write_return[3] + write_return[4];
	return (write_return[0] + write_return[1]);
}

int	print_lubase(unsigned long n, const char *base)
{
	int	base_len;
	int	write_return[2];

	base_len = ft_strlen(base);
	if (n < (unsigned long) base_len)
		return (write(1, &base[n], 1));
	write_return[0] = print_lubase(n / base_len, base);
	if (write_return[0] < 0)
		return (write_return[0]);
	write_return[1] = print_lubase(n % base_len, base);
	if (write_return[1] < 0)
		return (write_return[1]);
	return (write_return[0] + write_return[1]);
}

int	print_nchars(int n, char c)
{
	int	i;
	int	write_return;

	i = 0;
	while (i < n)
	{
		write_return = write(1, &c, 1);
		if (write_return < 0)
			return (write_return);
		i++;
	}
	return (i);
}

int	get_num_len(unsigned long n, int base_len)
{
	int	num_len;

	num_len = (n == 0);
	while (n)
	{
		n /= base_len;
		num_len++;
	}
	return (num_len);
}
