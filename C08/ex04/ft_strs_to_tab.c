/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 22:29:07 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/28 12:24:01 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		size_src;
	int		i;

	i = 0;
	size_src = ft_strlen(src) + 1;
	copy = malloc(size_src * sizeof(char));
	if (!copy)
		return (0);
	while (i < size_src)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab_struct;

	tab_struct = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!tab_struct)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab_struct[i].size = ft_strlen(av[i]);
		tab_struct[i].str = av[i];
		tab_struct[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab_struct[i].str = 0;
	tab_struct[i].copy = 0;
	return (tab_struct);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	int		i;
	t_stock_str		*tab;
	
	i = 0;	
	tab = ft_strs_to_tab(argc,argv);
	while (i < argc)
	{
		printf("%d",tab[i].size);
		printf("%s",tab[i].str);
		printf("%s\n",tab[i].copy);
		i++;
	}
}

