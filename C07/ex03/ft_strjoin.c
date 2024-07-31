/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:12:49 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/27 15:24:19 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strslen(char **strs, int size)
{
	int		i;
	int		j;
	int		cpt;

	i = 0;
	j = 0;
	cpt = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			cpt++;
			j++;
		}
		i++;
	}
	return (cpt);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		size_dest;
	int		size_sep;

	size_sep = ft_strlen(sep);
	size_dest = (ft_strslen(strs, size) + (size_sep * (size - 1)) + 1);
	if (size <= 0)
		size_dest = 1;
	dest = malloc(size_dest * sizeof(char));
	if (!dest)
		return (0);
	dest[0] = '\0';
	if (size == 0)
		return (dest);
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (!(i == size - 1))
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
  char *strs[] = {"test1","test11","test111"};
  int   size = 3;
  char *sep = " //";
  char *dest = ft_strjoin(size,strs,sep);

  printf("%s",dest);
  free(dest);
}
*/
