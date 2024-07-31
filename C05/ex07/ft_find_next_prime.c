/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:56:35 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/21 12:15:16 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	else if (nb < 0)
		return (0);
	else if (nb == 2)
		return (1);
	while (i < nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int		i;

	i = 0;
	if (nb < 0)
		return (2);
	while (!ft_is_prime(nb + i))
	{
		i++;
	}
	return (nb + i);
}
/*
#include <stdio.h>
int main(void)
{
	int		result;

	result = ft_find_next_prime(12);
	printf("%d",result);
}
*/
