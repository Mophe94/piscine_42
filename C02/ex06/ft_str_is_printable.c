/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:49:22 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/13 16:54:14 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			return (0);
		}
		i++;
	}
	if (str[0] == '\0')
	{
		return (1);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "bonjour\r";
	int		result = ft_str_is_printable(str);

	printf("%s\n%d",str,result);
}
*/
