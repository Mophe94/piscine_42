/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:00:53 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/27 15:23:47 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
#include <stdio.h>
int    main(void)
{
    int        i;
    int        *tab;

    i = 0;
    tab = ft_range(25, 20);
    while (i < 10)
    {
        printf("i:  %d -- tab[i]: %d \n", i, tab[i]);
		i++;
    }
}
*/
