/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playground.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: causilva <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:15:52 by causilva          #+#    #+#             */
/*   Updated: 2025/08/28 11:19:48 by causilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*string;

	fd = open("teste2.txt", O_RDONLY);
	string = get_next_line(fd);
	while (string)
	{
		write(1, "|", 1);
		write(1, string, ft_strlen(string));
		free(string);
		string = get_next_line(fd);
	}
	close(fd);
	return (0);
}
 */
/* 
int	main(void)
{
	int		fd1;
	int		fd2;
	char	*string;

	fd1 = open("teste.txt", O_RDONLY);
	fd2 = open("teste1.txt", O_RDONLY);

	string = get_next_line(fd1);
	write(1, "|", 1);
	write(1, string, ft_strlen(string));
	free(string);

	string = get_next_line(fd2);
	write(1, "|", 1);
	write(1, string, ft_strlen(string));
	free(string);

	string = get_next_line(fd1);
	write(1, "|", 1);
	write(1, string, ft_strlen(string));
	free(string);

	string = get_next_line(fd2);
	write(1, "|", 1);
	write(1, string, ft_strlen(string));
	free(string);

	close(fd1);
	close(fd2);
	return (0);
}
 */