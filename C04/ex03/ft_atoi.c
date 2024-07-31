/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:42:41 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/23 11:56:04 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		count_minus;
	int		result;

	i = 0;
	count_minus = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\f' 
		|| str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count_minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * count_minus);
}

#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	str[] = "   -----+++-+- 4 58477dqdq448*&%^^";
	int		result;

	result = ft_atoi(str);
	printf("Ma fonction : %d\n",result);
	result = atoi(str);
	printf("Original fonction : %d",result);
}

