/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chideyuk <chideyuk@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:22:50 by chideyuk          #+#    #+#             */
/*   Updated: 2021/10/01 15:22:55 by chideyuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar_plus(int c);
int		ft_istype(int c);
int		ft_treat(va_list argument, int c);
int		ft_treatchar(char c);
int		ft_treathex(unsigned int nbr, int xorX);
int		ft_treatint(int nbr);
int		ft_treatptr(unsigned long long ptr);
int		ft_treatstr(char *str);
int		ft_treatuint(unsigned int nbr);
char	*ft_uitoa(unsigned int n);

#endif