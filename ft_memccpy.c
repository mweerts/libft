/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweerts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:53:35 by mweerts           #+#    #+#             */
/*   Updated: 2019/10/08 18:14:38 by mweerts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((char*)src)[i] == c)
			return (&(((char*)dst)[i + 1]));
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	return (NULL);
}
