/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_flags_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: causilva <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:57:03 by causilva          #+#    #+#             */
/*   Updated: 2025/05/22 15:23:53 by causilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	fill_flags(t_flags *flags, const char *s)
{
	int	i;

	set_zero(flags);
	i = 0;
	while (s[i] && ft_strchr("#-+ 0", s[i]))
		set_bool_flag(flags, s[i++]);
	i += readstr_atoi(&s[i], &(flags->num));
	if (s[i] == '.')
	{
		flags->bool_point = 1;
		i++;
		i += readstr_atoi(&s[i], &(flags->point));
	}
	if (s[i] && ft_strchr("cspdiuxX%", s[i]))
		flags->type = s[i++];
	return (i);
}

void	set_zero(t_flags *flags)
{
	flags->bool_hashtag = 0;
	flags->bool_minus = 0;
	flags->bool_plus = 0;
	flags->bool_space = 0;
	flags->bool_zero = 0;
	flags->num = 0;
	flags->bool_point = 0;
	flags->point = 0;
	flags->type = '\0';
	return ;
}

void	set_bool_flag(t_flags *flags, char c)
{
	if (c == '#')
		flags->bool_hashtag = 1;
	else if (c == '-')
		flags->bool_minus = 1;
	else if (c == '+')
		flags->bool_plus = 1;
	else if (c == ' ')
		flags->bool_space = 1;
	else if (c == '0')
		flags->bool_zero = 1;
}

int	readstr_atoi(const char *s, int *num)
{
	int	i;

	*num = 0;
	i = 0;
	while ((s[i] >= '0' && s[i] <= '9'))
	{
		if (*num > (INT_MAX - (s[i] - '0')) / 10)
		{
			*num = -1;
			break ;
		}
		*num *= 10;
		*num += s[i] - '0';
		i++;
	}
	return (i);
}
