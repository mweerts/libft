/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweerts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 23:34:19 by mweerts           #+#    #+#             */
/*   Updated: 2019/10/10 13:32:07 by mweerts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int i;

	i = 0;
	if ((unsigned char*)dst > (unsigned char*)src)
	{
		i = n;
		while (i > 0)
		{
			((unsigned char*)dst)[i - 1] = ((unsigned char*)src)[i - 1];
			i--;
		}
	}
	else if ((unsigned char*)dst == (unsigned char*)src)
		return (dst);
	else
	{
		while (i < n)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			i++;
		}
	}
	return (dst);
}
