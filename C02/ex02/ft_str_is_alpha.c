/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:57:29 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/13 16:25:25 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
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
  char *str = "abc45";
  int   result;
  printf("%s",str);
  result = ft_str_is_alpha(str);
  printf("%d",result);
}
*/
