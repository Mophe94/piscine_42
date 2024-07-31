/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:56:37 by dbajeux           #+#    #+#             */
/*   Updated: 2024/04/09 19:33:59 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	length_src;
	unsigned int	length_dest;

	j = 0;
	length_dest = ft_strlen(dest);
	length_src = ft_strlen(src);
	i = ft_strlen(dest);
	if (size == 0 || size <= length_dest)
		return (size + length_src);
	while (src[j] != '\0' && i < size )
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (length_dest + length_src);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[7] = "Bonjour"; 
	char	src[8] = "comment va ?";
	int		result_length;

	result_length = 0;
	ft_strlcat(dest,src,25);
	printf("Ma fonction :%s\n",dest);
}

