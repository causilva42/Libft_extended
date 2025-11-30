/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: causilva <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:40:01 by causilva          #+#    #+#             */
/*   Updated: 2025/05/26 12:25:20 by causilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	t_iocount	total;
	t_iocount	func_return;

	if (!format)
		return (-1);
	va_start(args, format);
	total = (t_iocount){0, 0};
	func_return = (t_iocount){0, 1};
	while (format[total.read] != '\0' && func_return.printed >= 0)
	{
		if (format[total.read] == '%')
			func_return = choose_print(&format[++total.read], &args);
		else
			func_return = print_pure(&format[total.read]);
		total.read += func_return.read;
		total.printed += func_return.printed;
	}
	if (func_return.printed < 0)
		return (func_return.printed);
	va_end(args);
	return (total.printed);
}

t_iocount	choose_print(const char *s, va_list *args)
{
	int			temp_read;
	int			printed;
	t_flags		flags;

	temp_read = fill_flags(&flags, s);
	printed = 0;
	if (!flags.type || flags.num == -1 || flags.point == -1)
		return ((t_iocount){0, -1});
	if (flags.type == 'c')
		printed = print_c(va_arg(*args, int), flags);
	else if (flags.type == 's')
		printed = print_s(va_arg(*args, char *), flags);
	else if (flags.type == 'p')
		printed = print_p(va_arg(*args, void *), flags);
	else if (flags.type == 'd' || flags.type == 'i')
		printed = print_li(va_arg(*args, int), flags);
	else if (flags.type == 'u')
		printed = print_li(va_arg(*args, unsigned int), flags);
	else if (flags.type == 'x')
		printed = print_luhex(va_arg(*args, unsigned int), flags);
	else if (flags.type == 'X')
		printed = print_luhex(va_arg(*args, unsigned int), flags);
	else if (flags.type == '%')
		printed = write(1, "%", 1);
	return ((t_iocount){temp_read, printed});
}

t_iocount	print_pure(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != '%')
		i++;
	return ((t_iocount){i, write(1, s, i)});
}
