/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:43:09 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/13 16:26:46 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	int		check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			check = 0;
		}
		i++;
	}
	if (str[0] == '\0')
	{
		check = 1;
	}
	return (check);
}
/*
#include <stdio.h>
int   main(void)
{
  char *str = ",,,,";
  int   result;
  printf("%s",str);
  result = ft_str_is_uppercase(str);
  printf("%d",result);
}
*/
