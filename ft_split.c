/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweerts <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:48:33 by mweerts           #+#    #+#             */
/*   Updated: 2019/11/04 18:20:27 by mweerts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_mots(const char *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*word(const char *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = (char*)malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void free_mem(char **tab, int index_max)
{
	int i;

	i = 0;
	while(i <= index_max)
	{
		free(tab[i]);
		tab[i] = NULL;
		i++;
	}
	free(tab);
	tab = NULL;
}

char		**ft_split(const char *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char*) * (nbr_mots(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			tab[j] = word(&s[i], c);
			if (tab[j] == NULL)
			{
				free_mem(tab, j);
				return (NULL);
			}
			j++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	tab[nbr_mots(s, c)] = NULL;
	return (tab);
}
