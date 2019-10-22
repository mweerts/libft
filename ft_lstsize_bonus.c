/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweerts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:29:46 by mweerts           #+#    #+#             */
/*   Updated: 2019/10/22 15:44:51 by mweerts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int		ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*cpy;

	i = 0;
	cpy = lst;
	while (cpy)
	{
		cpy = cpy->next;
		i++;
	}
	return (i);
}
