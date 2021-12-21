/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 12:40:15 by nsar              #+#    #+#             */
/*   Updated: 2021/07/28 15:05:04 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main(void)
{
	int div;
	int mod;
	int a;
	int b;
	a = 7;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d", div, mod);
}
