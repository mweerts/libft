/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweerts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:46:09 by mweerts           #+#    #+#             */
/*   Updated: 2019/10/20 18:07:32 by mweerts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*ret;

	if (lst == NULL)
		return (NULL);
	ret = (*f)(lst);
	lst = lst->next;
	while (lst)
	{
		ret->next = (*f)(lst);
		ret = ret->next;
	}
	return (ret);
}
