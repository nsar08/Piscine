/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:28:59 by nsar              #+#    #+#             */
/*   Updated: 2021/07/27 17:57:29 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_range(int min, int max);
int main (void)
{
	int i = 0;
	int min =14;
	int max = 20;
	while (min < max)
	{
		printf("%d\n", ft_range(min, max));
		min++;
	}
}
