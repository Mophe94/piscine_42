/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:59:44 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/29 14:12:23 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_issep(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	nbr_word(char *str, char *charset)
{
	int		i;
	int		cpt;

	i = 0;
	cpt = 0;
	while (str[i])
	{
		while (ft_issep(charset, str[i]) == 1 && str[i] != '\0')
			i++;
		if (str[i] != '\0')
			cpt++;
		while (ft_issep(charset, str[i]) == 0 && str[i] != '\0')
			i++;
	}
	return (cpt);
}

int	ft_size_word(int pos, char *charset, char *str)
{
	int		i;
	int		cpt;

	i = pos;
	cpt = 0;
	while (ft_issep(charset, str[i]) == 0 && str[i] != '\0')
	{
		cpt++;
		i++;
	}
	return (cpt);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		c;
	char	**tab;

	i = -1;
	c = 0;
	tab = malloc(sizeof (char *) * (nbr_word(str, charset) + 1));
	if (!tab)
		return (0);
	while (++i < nbr_word(str, charset))
	{
		j = -1;
		while (ft_issep(charset, str[c]) == 1 && str[c] != '\0')
			c++;
		tab[i] = malloc(sizeof(char) * (ft_size_word(c, charset, str) + 1));
		if (!tab[i])
			return (0);
		while (ft_issep(charset, str[c]) == 0 && str[c] != '\0')
			tab[i][++j] = str[c++];
		tab[i][++j] = '\0';
	}
	tab[i] = 0;
	return (tab);
}
/*
#include <stdio.h>
int		main(int ac, char **av)
{
	(void)ac;
	char **tab;
	int		i;
	i = 0;
	tab = ft_split(av[1], av[2]);
	while (tab[i])
	 {
		 printf("<%s>\n",tab[i]);
		 i++;
	 }
}
*/
