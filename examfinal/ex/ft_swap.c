/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 12:01:48 by nsar              #+#    #+#             */
/*   Updated: 2021/07/28 12:39:59 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
	int x;
	int y;
	int a;
	int b;
	x = 5;
	y =  6;
	printf("%d %d\n", x, y);
	ft_swap(&x, &y);
	printf("%d %d\n", x, y);
}
