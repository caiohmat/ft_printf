/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chideyuk <chideyuk@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:32:44 by chideyuk          #+#    #+#             */
/*   Updated: 2021/10/01 14:32:50 by chideyuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_aux(const char *str, va_list argument)
{
	int	counter;
	int	charnbr;

	charnbr = 0;
	counter = 0;
	while (str[counter])
	{
		if (str[counter] == '%' && str[counter + 1])
		{		
			if (ft_istype(str[counter + 1]) != 0)
			{
				counter++;
				charnbr = charnbr + ft_treat(argument, str[counter]);
			}
			else
				charnbr = charnbr + ft_putchar_plus(str[counter]);
		}
		else if (str[counter] != '%')
			charnbr = charnbr + ft_putchar_plus(str[counter]);
		counter++;
	}
	return (charnbr);
}		

int	ft_printf(const char *format, ...)
{
	const char	*str;
	va_list		argument;
	int			charnumber;

	str = ft_strdup(format);
	va_start(argument, format);
	charnumber = ft_printf_aux(str, argument);
	va_end(argument);
	free((char *)str);
	return (charnumber);
}
