/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweerts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:46:09 by mweerts           #+#    #+#             */
/*   Updated: 2019/10/20 23:17:15 by mweerts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*ret;
	t_list	*elem;
	
	ret = malloc(sizeof(t_list));
//	ret = ft_lstnew((*f)(lst->content));
//	ret = elem;
//	lst = lst->next;
//	while (lst->next)
//	{
	//	elem = (*f)(lst);
//		ret->next = elem;
	//	ret = ret->next;
	//	lst = lst->next;
//	}
	return (ret);
}
