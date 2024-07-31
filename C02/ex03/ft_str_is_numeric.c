/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:44:13 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/13 16:25:07 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
  char *str = "dhihdw";
  int   result;
  printf("%s",str);
  result = ft_str_is_numeric(str);
  printf("%d",result);
}
*/
