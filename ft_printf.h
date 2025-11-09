/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:38:52 by lemontei          #+#    #+#             */
/*   Updated: 2025/11/05 11:04:47 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		printf_nbr(int nbr, int fd);
//int		printf_ptr(unsigned long long ptr, int fd);
int		printf_str(char *str, int fd);
int		printf_percent(char c, int fd);
int		printf_char(const char c, int fd);
int		ft_printf(const char *format, ...);
int		ft_putnbru_fd(unsigned int nbr, int fd);
int		ft_hexl_convert_fd(unsigned int nbr, int fd);
int		ft_hexu_convert_fd(unsigned int nbr, int fd);

#endif
