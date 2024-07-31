/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:11:49 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/27 14:34:40 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		size_src;
	int		i;

	i = 0;
	size_src = ft_strlen(src) + 1;
	copy = malloc(size_src * sizeof(char));
	if (!copy)
		return (0);
	while (i < size_src)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int main(void)
{
    char *original = "test";
    char *copy;

    copy = ft_strdup(original);
    printf("%s",copy);
}
*/
