/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweerts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:04:54 by mweerts           #+#    #+#             */
/*   Updated: 2019/10/23 01:19:38 by mweerts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;

	if (lst == NULL)
		return (NULL);
	if ((ret = ft_lstnew((*f)(lst))) == NULL)
		(*del)(ret);
	while (lst->next)
	{
		lst = lst->next;
		ft_lstadd_back(&ret, ft_lstnew((*f)(lst)));
		if (ft_lstlast(ret) == NULL)
			ft_lstclear(&ret, *del);
	}
	return (ret);
}
