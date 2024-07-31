/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dylan-bajeux@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:12:10 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/14 16:55:23 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
/*
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

int		main(void)
{
	char	*str = "abcd";
	int		length;

	ft_putstr(str);
	length = ft_strlen(str) + 48;
	write(1, &length, 1);
}
*/
