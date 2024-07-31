/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dylan-bajeux@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:37:45 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/08 21:37:13 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_n(int digit)
{
	int		div;
	int		modulo;

	div = digit / 10 + 48;
	write(1, &div, 1);
	modulo = digit % 10 + 48;
	write(1, &modulo, 1);
}

void	ft_print_comb2(void)
{
	int		firstdigit;
	int		seconddigit;

	firstdigit = 0;
	while (firstdigit <= 98)
	{
		seconddigit = firstdigit + 1;
		while (seconddigit <= 99)
		{
			print_n(firstdigit);
			write(1, " ", 1);
			print_n(seconddigit);
			if (firstdigit != 98)
				write(1, ", ", 2);
			seconddigit++;
		}
		firstdigit++;
	}
}
/*
int		main(void)
{
	ft_print_comb2();
	return 0;
}
*/
