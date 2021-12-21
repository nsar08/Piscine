/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 10:45:26 by nsar              #+#    #+#             */
/*   Updated: 2021/07/29 18:39:17 by nsar             ###   ########.fr       */
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
	int b;
	int c;
	b = 3;
	c = 4;
	printf("%d %d\n", c, b);
	ft_swap(&b , &c);
	printf("%d %d\n", c, b);
}
