/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweerts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:23:50 by mweerts           #+#    #+#             */
/*   Updated: 2019/10/15 14:04:35 by mweerts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;
	
	if (*alst != NULL)
	{
		last = ft_lstlast(*alst);
		last->next = new;
	}
	else
		*alst = new;
}
