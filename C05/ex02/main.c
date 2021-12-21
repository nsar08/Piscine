/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 10:53:17 by nsar              #+#    #+#             */
/*   Updated: 2021/07/24 12:03:20 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_power(int nb, int power);
int main (void)
{
	int nb1 = 2;
	int nb2 = -2;
	int nb3 = 2;
	int nb4 = 0;
	int power1 = 3;
	int power2 = 4;
	int power3 = -5;
	int power4 = 0;
	
	printf("ft_iterative_power(%d, %d): %d\n", nb1, power1, ft_iterative_power(nb1, power1));
	printf("ft_iterative_power(%d, %d): %d\n", nb2, power2, ft_iterative_power(nb2, power2));
	printf("ft_iterative_power(%d, %d): %d\n", nb3, power3, ft_iterative_power(nb3, power3));
	printf("ft_iterative_power(%d, %d): %d\n", nb4, power4, ft_iterative_power(nb4, power4));
}
