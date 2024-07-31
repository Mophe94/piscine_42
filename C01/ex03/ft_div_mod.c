/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dylan-bajeux@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:01:06 by dbajeux           #+#    #+#             */
/*   Updated: 2024/02/11 15:46:56 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	int		divcontent;
	int		modcontent;
	int		*divptr;
	int		*modptr;

	a = 9;
	b = 2;
	divptr = &divcontent;
	modptr = &modcontent;
	divcontent = 0;
	modcontent = 0;

	ft_putchar(divcontent + 48);
	ft_putchar(modcontent + 48);
	ft_div_mod(a,b,divptr,modptr);
	ft_putchar(divcontent + 48);
	ft_putchar(modcontent + 48);
	return 0;
}
*/
