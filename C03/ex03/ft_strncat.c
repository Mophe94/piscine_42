/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:36:19 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/18 12:01:42 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[25] = "bon";
	char 	dest[19] = "comment va ?";
	char	src2[25] = "bon";
	char 	dest2[20] = "comment va ?";

	ft_strncat(dest,src,4);
	printf("ma fonction:%s\n", dest);
	strncat(dest2,src2,4);
	printf("leur fonction:%s\n", dest2);

}

