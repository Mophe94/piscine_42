/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:28:52 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/13 12:16:34 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		check;

	i = 0;
	check = 1;
	while (str[i])
	{
		if (check == 1 && (str[i] <= 'z' && str[i] >= 'a'))
			str[i] -= 32;
		else if (check == 0 && (str[i] <= 'Z' && str[i] >= 'A'))
			str[i] += 32;
		if (!((str[i] >= '0' && str[i] <= '9') 
				|| (str[i] >= 'A' && str[i] <= 'Z') 
				|| (str[i] >= 'a' && str[i] <= 'z')))
			check = 1;
		else
			check = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s",str);
	return (0);
}
*/
