/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mytests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: causilva <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:40:53 by causilva          #+#    #+#             */
/*   Updated: 2025/08/28 10:59:29 by causilva         ###   ########.fr       */
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
int	main(void)
{
	ft_printf("\nc:\n");
	ft_printf("|%c|", 'a');		printf("|%c|\n", 'a');
	ft_printf("|%12c|", 'a');		printf("|%12c|\n", 'a');
	ft_printf("|%-12c|", 'a');		printf("|%-12c|\n", 'a');
	ft_printf("|%012c|", 'a');		printf("|%012c|\n", 'a');
	ft_printf("|%.12c|", 'a');		printf("|%.12c|\n", 'a');
	ft_printf("|%#c|", 'a');		printf("|%#c|\n", 'a');
	ft_printf("|% c|", 'a');		printf("|% c|\n", 'a');
	ft_printf("|%+c|", 'a');		printf("|%+c|\n", 'a');

	ft_printf("\ns:\n");
	ft_printf("|%12s|", "ABC");		printf("|%12s|\n", "ABC");
	ft_printf("|%-12s|", "ABC");	printf("|%-12s|\n", "ABC");
	ft_printf("|%012s|", "ABC");	printf("|%012s|\n", "ABC");
	ft_printf("|%.12s|", "ABC");	printf("|%.12s|\n", "ABC");
	ft_printf("|%#s|", "ABC");		printf("|%#s|\n", "ABC");
	ft_printf("|% s|", "ABC");		printf("|% s|\n", "ABC");
	ft_printf("|%+s|", "ABC");		printf("|%+s|\n", "ABC");

	char string[5];
	ft_printf("\np:\n");
	ft_printf("|%20p|", string);	printf("|%20p|\n", string);
	ft_printf("|%-20p|", string);	printf("|%-20p|\n", string);
	ft_printf("|%020p|", string);	printf("|%020p|\n", string);
	ft_printf("|%.20p|", string);	printf("|%.20p|\n", string);
	ft_printf("|%#p|", string);		printf("|%#p|\n", string);
	ft_printf("|% p|", string);		printf("|% p|\n", string);
	ft_printf("|%+p|", string);		printf("|%+p|\n", string);

	ft_printf("\nd:\n");
	ft_printf("|%12d|", 42);		printf("|%12d|\n", 42);
	ft_printf("|%-12d|", 42);		printf("|%-12d|\n", 42);
	ft_printf("|%012d|", 42);		printf("|%012d|\n", 42);
	ft_printf("|%.12d|", 42);		printf("|%.12d|\n", 42);
	ft_printf("|%#d|", 42);			printf("|%#d|\n", 42);
	ft_printf("|% d|", 42);			printf("|% d|\n", 42);
	ft_printf("|%+d|", 42);			printf("|%+d|\n", 42);

	ft_printf("\ni:\n");
	ft_printf("|%12i|", 42);		printf("|%12i|\n", 42);
	ft_printf("|%-12i|", 42);		printf("|%-12i|\n", 42);
	ft_printf("|%012i|", 42);		printf("|%012i|\n", 42);
	ft_printf("|%.12i|", 42);		printf("|%.12i|\n", 42);
	ft_printf("|%#i|", 42);			printf("|%#i|\n", 42);
	ft_printf("|% i|", 42);			printf("|% i|\n", 42);
	ft_printf("|%+i|", 42);			printf("|%+i|\n", 42);

	ft_printf("\nu:\n");
	ft_printf("|%12u|", 42);		printf("|%12u|\n", 42);
	ft_printf("|%-12u|", 42);		printf("|%-12u|\n", 42);
	ft_printf("|%012u|", 42);		printf("|%012u|\n", 42);
	ft_printf("|%.12u|", 42);		printf("|%.12u|\n", 42);
	ft_printf("|%#u|", 42);			printf("|%#u|\n", 42);
	ft_printf("|% u|", 42);			printf("|% u|\n", 42);
	ft_printf("|%+u|", 42);			printf("|%+u|\n", 42);

	ft_printf("\nx:\n");
	ft_printf("|%12x|", 42);		printf("|%12x|\n", 42);
	ft_printf("|%-12x|", 42);		printf("|%-12x|\n", 42);
	ft_printf("|%012x|", 42);		printf("|%012x|\n", 42);
	ft_printf("|%.12x|", 42);		printf("|%.12x|\n", 42);
	ft_printf("|%#x|", 42);			printf("|%#x|\n", 42);
	ft_printf("|% x|", 42);			printf("|% x|\n", 42);
	ft_printf("|%+x|", 42);			printf("|%+x|\n", 42);

	ft_printf("\nX:\n");
	ft_printf("|%12X|", 42);		printf("|%12X|\n", 42);
	ft_printf("|%-12X|", 42);		printf("|%-12X|\n", 42);
	ft_printf("|%012X|", 42);		printf("|%012X|\n", 42);
	ft_printf("|%.12X|", 42);		printf("|%.12X|\n", 42);
	ft_printf("|%#X|", 42);			printf("|%#X|\n", 42);
	ft_printf("|% X|", 42);			printf("|% X|\n", 42);
	ft_printf("|%+X|", 42);			printf("|%+X|\n", 42);

	ft_printf("\n%%:\n");
	ft_printf("|%12%|");			printf("|%12%|\n");
	ft_printf("|%-12%|");			printf("|%-12%|\n");
	ft_printf("|%012%|");			printf("|%012%|\n");
	ft_printf("|%.12%|");			printf("|%.12%|\n");
	ft_printf("|%#%|");				printf("|%#%|\n");
	ft_printf("|% %|");				printf("|% %|\n");
	ft_printf("|%+%|");				printf("|%+%|\n");

	ft_printf("\nextra:\n");
	ft_printf("|%+-12.08d|", -42);	printf("|%+-12.08d|\n", -42);
	ft_printf("|%+20p|", string);	printf("|%+20p|\n", string);
	return (0);
}
 */