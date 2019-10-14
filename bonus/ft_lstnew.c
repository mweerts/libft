/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweerts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 22:00:13 by mweerts           #+#    #+#             */
/*   Updated: 2019/10/12 00:04:30 by mweerts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;
	
	elem =  malloc(sizeof(*elem));
	if (elem == NULL)
		return (NULL);
	if (content == NULL)
		elem->content = NULL;
	else
	{
		elem->content = malloc(sizeof(content));
		ft_memcpy(elem->content, content, sizeof(&content) * sizeof(content));
	}
	elem->next = NULL;
	return (elem);
}
