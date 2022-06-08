/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 05:18:25 by apercebo          #+#    #+#             */
/*   Updated: 2022/01/13 11:32:49 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_strchr(char *str, int c);
char	*ft_strmjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);
char	*get_next_line(int fd);

#endif