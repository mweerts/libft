/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweerts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 23:37:18 by mweerts           #+#    #+#             */
/*   Updated: 2019/10/07 23:45:42 by mweerts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && size > i + 1)
	{
		dst[i + j] = src[j];
		j++;
		size--;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
