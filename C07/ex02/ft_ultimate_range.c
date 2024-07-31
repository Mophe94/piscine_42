/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:13:00 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/27 15:21:06 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!range)
		return (-1);
	while (i < size)
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	int		**tab;
    int		*p;
	int		i;

	i = 0;
	tab = &p;
	for(int i = 0; i < 10; i++)
		printf("=>  %d \n",ft_ultimate_range(&p,10,20));
}
*/
