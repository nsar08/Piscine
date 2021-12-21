/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:12:17 by nsar              #+#    #+#             */
/*   Updated: 2021/07/11 11:58:07 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	putchar(char c);

int main(void)
{
	int	lignes;
	int	colones;
	int x;
	int	y;

	lignes = 0;
	colones = 0;
	x=4;
	y=3;
	colones  = 0;
	putchar ('O');
	colones++;

		while (lignes < x-1)
		{
			putchar('-');
			lignes++;
		}
		if (lignes == (x-1))
		{
			putchar('0');
			lignes++;
		}
		putchar('\n');
		
		if (y == 2)
		{
		lignes = 0;
		}

}
	
	
