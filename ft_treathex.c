/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treathex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chideyuk <chideyuk@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:56:07 by chideyuk          #+#    #+#             */
/*   Updated: 2021/10/06 16:56:11 by chideyuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_tohexup(int n)
{
	if (n <= 9)
		ft_putchar_fd(n + 48, 1);
	else
		ft_putchar_fd(n + 55, 1);
	return ;
}

static void	ft_tohexlow(int n)
{
	if (n <= 9)
		ft_putchar_fd(n + 48, 1);
	else
		ft_putchar_fd(n + 87, 1);
	return ;
}

static int	ft_aux(unsigned int nbr, int xorX)
{
	int	charnbr;

	charnbr = 1;
	if (xorX == 0 && nbr != 0)
	{	
		charnbr = charnbr + ft_aux(nbr / 16, 0);
		ft_tohexup(nbr % 16);
	}
	else if (nbr != 0)
	{
		charnbr = charnbr + ft_aux(nbr / 16, 1);
		ft_tohexlow(nbr % 16);
	}
	return (charnbr);
}

int	ft_treathex(unsigned int nbr, int xorX)
{
	if (nbr == 0)
		return (ft_putchar_plus('0'));
	else
		return (ft_aux(nbr, xorX) - 1);
}
