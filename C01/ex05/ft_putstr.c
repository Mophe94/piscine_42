/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dylan-bajeux@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 19:20:22 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/14 16:57:20 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0; 
	while (str[i] != '\0')
	{
		write(1, &str[i], 1); 
		i++;
	}
}
/*
int		main(void)
{
	char 	*str = "abcd";

	ft_putstr(str);
}
*/
