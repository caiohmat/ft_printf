/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chideyuk <chideyuk@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:57:05 by chideyuk          #+#    #+#             */
/*   Updated: 2021/10/06 16:57:09 by chideyuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_tohexlow(int n)
{
	if (n <= 9)
		ft_putchar_fd(n + 48, 1);
	else
		ft_putchar_fd(n + 87, 1);
	return ;
}

static int	ft_aux(unsigned long long nbr)
{
	int	charnbr;

	charnbr = 1;
	if (nbr != 0)
	{
		charnbr = charnbr + ft_aux(nbr / 16);
		ft_tohexlow(nbr % 16);
	}
	return (charnbr);
}

int	ft_treatptr(unsigned long long nbr)
{
	if (nbr == 0)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	else
	{
		ft_putchar_fd('0', 1);
		ft_putchar_fd('x', 1);
		return (ft_aux(nbr) + 1);
	}
}
