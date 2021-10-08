/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chideyuk <chideyuk@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:56:24 by chideyuk          #+#    #+#             */
/*   Updated: 2021/10/06 16:56:30 by chideyuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treatint(int nbr)
{
	char	*str;
	int		charnbr;

	str = ft_itoa(nbr);
	ft_putstr_fd(str, 1);
	charnbr = ft_strlen(str);
	free(str);
	return (charnbr);
}
