/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chideyuk <chideyuk@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:42:14 by chideyuk          #+#    #+#             */
/*   Updated: 2021/10/01 15:42:18 by chideyuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_plus(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_istype(int c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_treat(va_list argument, int c)
{
	int	charnbr;

	charnbr = 0;
	if (c == 'c')
		charnbr = ft_treatchar(va_arg(argument, int));
	if (c == 's')
		charnbr = ft_treatstr(va_arg(argument, char *));
	if (c == 'p')
		charnbr = ft_treatptr(va_arg(argument, unsigned long long));
	if (c == 'd' || c == 'i')
		charnbr = ft_treatint(va_arg(argument, int));
	if (c == 'u')
		charnbr = ft_treatuint(va_arg(argument, unsigned int));
	if (c == 'x')
		charnbr = ft_treathex(va_arg(argument, unsigned int), 1);
	if (c == 'X')
		charnbr = ft_treathex(va_arg(argument, unsigned int), 0);
	if (c == '%')
		charnbr = ft_putchar_plus('%');
	return (charnbr);
}
