/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playground.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: causilva <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:40:53 by causilva          #+#    #+#             */
/*   Updated: 2025/08/28 10:58:32 by causilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "mandatory/ft_printf.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	out(int n1, int n2) {printf("(%d:%d)\n", n1, n2);}
int	main(void)
{
	out(ft_printf("|%#x|", LONG_MIN), printf("|%#x|", LONG_MIN));
}
 */
/* 
void	out(int n1, int n2) {printf("(%d:%d)\n", n1, n2);}
int	main(void)
{
	char	*string_null = NULL;
	char	string[] = "abcd";

	printf("\nc:\n");
	out(ft_printf("|%c|", 0),			printf("|%c|", 0));
	out(ft_printf("|%c|", 'A'),			printf("|%c|", 'A'));
	printf("\ns:\n");
	out(ft_printf("|%s|", string_null),	printf("|%s|", string_null));
	out(ft_printf("|%s|", string),		printf("|%s|", string));
	printf("\np:\n");
	out(ft_printf("|%p|", string_null),	printf("|%p|", string_null));
	out(ft_printf("|%p|", string),		printf("|%p|", string));
	out(ft_printf("|%p|", ULONG_MAX),	printf("|%p|", ULONG_MAX));

	printf("\nd:\n");
	out(ft_printf("|%d|", 0),			printf("|%d|", 0));
	out(ft_printf("|%d|", 42),		printf("|%d|", 42));
	out(ft_printf("|%d|", INT_MIN),		printf("|%d|", INT_MIN));
	out(ft_printf("|%d|", INT_MAX),		printf("|%d|", INT_MAX));
	printf("\ni:\n");
	out(ft_printf("|%i|", 0),			printf("|%i|", 0));
	out(ft_printf("|%i|", 42),		printf("|%i|", 42));
	out(ft_printf("|%i|", INT_MIN),		printf("|%i|", INT_MIN));
	out(ft_printf("|%i|", INT_MAX),		printf("|%i|", INT_MAX));
	printf("\nu:\n");
	out(ft_printf("|%u|", 0),			printf("|%u|", 0));
	out(ft_printf("|%u|", 42),		printf("|%u|", 42));
	out(ft_printf("|%u|", UINT_MAX),	printf("|%u|", UINT_MAX));

	printf("\nx:\n");
	out(ft_printf("|%x|", 0),			printf("|%x|", 0));
	out(ft_printf("|%x|", 42),			printf("|%x|", 42));
	out(ft_printf("|%x|", UINT_MAX),	printf("|%x|", UINT_MAX));
	printf("\nX:\n");
	out(ft_printf("|%X|", 0),			printf("|%X|", 0));
	out(ft_printf("|%X|", 42),			printf("|%X|", 42));
	out(ft_printf("|%X|", UINT_MAX),	printf("|%X|", UINT_MAX));

	printf("\n%%:\n");
	out(ft_printf("|%%|"),				printf("|%%|"));

	printf("\nextra:\n");
	printf("%d|", ft_printf("|aa%"));	printf("%d|\n", printf("|aa%"));
	return (0);
}
 */