/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperrine <mperrine@student.42angouleme.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:05:36 by mperrine          #+#    #+#             */
/*   Updated: 2025/12/01 11:47:47 by mperrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
int		read_more(const int fd, char **buffer, int *read_res);
int		buffer_update(char **buffer, char **read_str, const int read_res);
void	ft_strmove(char **dest, char **src, const int start, const int end);
int		check_linebreak(const char *str, int *break_pos, const int read_res);
int		get_line(char **str, char **buffer, const int break_pos);
int		clean_buffer(char **buffer, const char *str);
int		init_buffer(char **buffer);
void	free_memory(char **str);

#endif
