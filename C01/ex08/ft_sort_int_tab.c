/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dylan-bajeux@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:43:25 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/15 21:03:33 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//exercice corriger juste a retest et push 
void	ft_sort_int_tab(int *tab, int size)
{
	int		temp;
	int		i;
	int		j;

	i = 0;
	j = i + 1;
	while (i < size - 1)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp; 
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

#include <stdio.h>
int main()
{
	int size = 6;
	int arr[] = {2, 5, 1, 3, 9, 7};	
	for (int i = 0; i < size; i++)
		printf("%i, ", arr[i]);	
	ft_sort_int_tab(arr, size);	
	printf("\n");
	for (int i = 0; i < size; i++)
		printf("%i, ", arr[i]);
}
