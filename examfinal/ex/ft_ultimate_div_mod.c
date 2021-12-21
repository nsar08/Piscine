/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:05:21 by nsar              #+#    #+#             */
/*   Updated: 2021/07/28 18:19:59 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int stocka;
	int stockb;
	stocka = *a;
	stockb = *b;

	*a = stocka / stockb;
	*b = stocka % stockb;
}
int main(void)
{
	int *a;
	int *b;
	int c;
	int d;
	c = 42;
	d = 21;
	a = &c;
	b = &d;
	printf("%d %d\n", *a, *b);
	ft_ultimate_div_mod(a,b);
	printf("%d %d\n", *a, *b);

}
