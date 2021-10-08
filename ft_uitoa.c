/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chideyuk <chideyuk@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:13:22 by chideyuk          #+#    #+#             */
/*   Updated: 2021/10/07 14:13:25 by chideyuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_convert(unsigned int n, int len, char *ptr)
{
	ptr[len] = '\0';
	len--;
	while (len >= 0)
	{
		ptr[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (ptr);
}

char	*ft_uitoa(unsigned int n)
{
	char			*ptr;	
	int				len;
	unsigned int	aux;

	len = 0;
	aux = n;
	if (n == 0)
		len++;
	while (aux != 0)
	{
		aux = aux / 10;
		len++;
	}
	ptr = malloc(len + 1);
	ft_bzero(ptr, len + 1);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_convert(n, len, ptr);
	return (ptr);
}
