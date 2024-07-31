/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:08:26 by dbajeux           #+#    #+#             */
/*   Updated: 2024/04/04 15:02:12 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;
	int		sqrt;

	i = 1;
	sqrt = 46341;
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	while (i <= sqrt)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int		result;

	result = ft_sqrt(49);
	printf("%d",result);
}
*/
