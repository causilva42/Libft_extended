/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: causilva <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:13:59 by causilva          #+#    #+#             */
/*   Updated: 2025/05/20 12:02:04 by causilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef BUFFER_MAXFD
#  define BUFFER_MAXFD 16
# endif

typedef struct s_dynstr
{
	char	*string;
	int		len;
	int		size;
}	t_dynstr;

//----------------------------------------------
//----------------GET_NEXT_LINE.C---------------
//----------------------------------------------
char	*get_next_line(int fd);
void	update_string(t_dynstr *line, const char *buffer);
int		update_buffer(char *buffer);

//----------------------------------------------
//-------------GET_NEXT_LINE_UTILS.C------------
//----------------------------------------------
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);

#endif