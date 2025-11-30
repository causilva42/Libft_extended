/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: causilva <@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:21:25 by causilva          #+#    #+#             */
/*   Updated: 2025/05/26 11:36:54 by causilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_strcpy(char *dst, const char *src);
char	*ft_strchr(const char *s, int c);

#endif