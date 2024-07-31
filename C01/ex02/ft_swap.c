/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dylan-bajeux@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:34:23 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/11 15:45:50 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		main(void)
{
	int		a;
	int		b;
	int		*aptr;
	int		*bptr;

	a = 9;
	b = 8;
	aptr = &a;
	bptr = &b;


	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_swap(aptr, bptr);
	ft_putchar(a + 48);	
	ft_putchar(b + 48);

	return 0;
}
*/
