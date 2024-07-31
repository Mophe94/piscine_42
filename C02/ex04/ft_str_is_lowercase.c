/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:07:49 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/13 16:26:13 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
  char *str = "JUG";
  int   result;
  printf("%s",str);
  result = ft_str_is_lowercase(str);
  printf("%d",result);
}
*/
