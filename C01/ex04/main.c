/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:17:56 by nsar              #+#    #+#             */
/*   Updated: 2021/07/14 19:28:57 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	c;
	int	d;
	int	*a;
	int	*b;

	c = 42;
	d = 21;
	a = &c;
	b = &d;
	printf("%d\n", *a);
	printf("%d\n", *b);
	ft_ultimate_div_mod(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
	return (0);
}
