/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:10:41 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/21 12:19:43 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		result;

	i = 1;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	int result = ft_iterative_power(-5,5);

	printf("%d",result);
}
*/
