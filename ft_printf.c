/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemontei <lemontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:13:33 by lemontei          #+#    #+#             */
/*   Updated: 2025/11/05 11:24:03 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	find_type(const char format, va_list *args)
{
	int	counter;

	counter = 0;
	if (format == 'c')
		counter += printf_char(va_arg(*args, int), 1);
	else if (format == 's')
		counter += printf_str(va_arg(*args, char *), 1);
	else if (format == 'i' || format == 'd')
		counter += printf_nbr(va_arg(*args, int), 1);
	else if (format == 'u')
		counter += ft_putnbru_fd(va_arg(*args, unsigned int), 1);
	else if (format == 'x')
		counter += ft_hexl_convert_fd(va_arg(*args, unsigned int), 1);
	else if (format == 'X')
		counter += ft_hexu_convert_fd(va_arg(*args, unsigned int), 1);
	else if (format == '%')
		counter += printf_percent('%', 1);
	else if (format == 'p')
		counter += printf_ptr(va_arg(*args, unsigned long long), 1);
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		counter;
	va_list	args;

	i = 0;
	counter = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			counter += find_type(format[i + 1], &args);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			counter++;
		}
		if (format[i])
			i++;
	}
	va_end(args);
	return (counter);
}

int main(void)
{
	int				dec_int = 42;
	int				hex_convert = -1;
	char			c = 'g';
	char			*str = NULL;
	unsigned int	unsigned_int = -50;

	/*
	printf("\n");
	printf("%i\n", ft_printf("first char: %c; second char: %c\n", c, c));
	printf("\n");
	printf("%i\n", ft_printf("first str: %s; second str: %s\n", str, str));
	printf("\n");
	printf("%i\n", ft_printf("with i: %i; with d: %d\n", dec_int, dec_int));
	printf("\n");
	printf("%i\n", ft_printf("unsigned int: %u\n", unsigned_int));
	printf("\n");
	printf("%i\n", ft_printf("lower hex: %x\n", hex_convert));
	printf("\n");
	printf("%i\n", ft_printf("upper hex: %X\n", hex_convert));
	printf("\n");
	printf("%i\n", ft_printf("percent: %%%%\n"));
	*/
	//printf("\n");
	//printf("%p\n", &dec_int);
	ft_printf("%p\n", &dec_int);
	printf("\n");
}
