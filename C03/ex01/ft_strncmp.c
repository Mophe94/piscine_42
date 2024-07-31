/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:26:00 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/24 17:42:20 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n -1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
# include <string.h>
int main(void)
{
	char	s1[] = "abc";
	char	s2[] = "ABc";

	s1[2] = (char)-32;
	int		result =ft_strncmp(s1,s2,0);
	printf("Ma fonctin :%d\n",result);
	result = strncmp(s1,s2,5);
	printf("Original fonction :%d",result);

}

