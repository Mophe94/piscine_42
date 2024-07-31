/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dylan-bajeux@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:28:49 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/11 15:47:25 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a /= *b;
	*b = temp % *b;
}
/*
void	ft_putchar(char toprint)
{
	write(1, &toprint, 1);
}
int		main(void)
{
	int		a;
	int		b;
	int		*aptr;
	int		*bptr;

	a = 0;
	b = 0;
	aptr = &a;
	bptr = &b;
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	a = 9;
	b = 2;
	ft_ultimate_div_mod(aptr, bptr);
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	return 0;
}
*/
