/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:29:51 by cuyar             #+#    #+#             */
/*   Updated: 2023/12/07 15:37:32 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_strlen(const char *str);
int	ft_atoi(const char *str);
int	ft_isalnum(int c);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
void    *ft_memset (void *s, int c, size_t len);
void    ft_bzero(void *s, size_t len);
#endif
