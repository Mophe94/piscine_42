/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:52:37 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/22 20:36:29 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[25] = "bonjour";
	char 	dest[19] = "comment va ?";
	char	src2[25] = "bonjour";
	char 	dest2[20] = "comment va ?";
	
	ft_strcat(dest,src);
	printf("ma fonction:%s\n", dest);
	strcat(dest2,src2);
	printf("leur fonction:%s\n", dest2);
	
}
*/
