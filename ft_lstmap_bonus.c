/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweerts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:04:54 by mweerts           #+#    #+#             */
/*   Updated: 2019/10/22 17:36:49 by mweerts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;

	while (lst)
	{
		if (!(current = malloc(sizeof(t_list))))
		{
			ft_lstclear(&current, del);
			return (NULL);
		}
		current->next = current;
		current->content = f(current->content);
		current = current->next;
		lst = lst->next;
	}
	return (current);
}
