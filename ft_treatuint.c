/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chideyuk <chideyuk@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:57:33 by chideyuk          #+#    #+#             */
/*   Updated: 2021/10/06 16:57:35 by chideyuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treatuint(unsigned int nbr)
{
	char	*str;
	int		charnbr;

	str = ft_uitoa(nbr);
	ft_putstr_fd(str, 1);
	charnbr = ft_strlen(str);
	free(str);
	return (charnbr);
}
