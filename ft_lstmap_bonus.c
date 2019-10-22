/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweerts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:04:54 by mweerts           #+#    #+#             */
/*   Updated: 2019/10/22 17:09:37 by mweerts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;

	ret = ft_lstnew((*f)(lst->content));
	lst = lst->next;
	while (lst->next)
	{
		ret->next = ft_lstnew((*f)(lst->content));
		lst = lst->next;
		ret = ret->next;
	}
	return (ret);
}
