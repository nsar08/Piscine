/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:17:51 by nsar              #+#    #+#             */
/*   Updated: 2021/07/27 13:46:41 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int small;
	int big;
	int range;
	int num;
	int limit;

	limit = 5;
	num = 1 & 2 & 3 & 4 &  5;
	small = big = num;
	limit = limit - 1;
	while(limit)
	{
		if(num > big)
		{
			big = num;
		}
		if(num < small)
		{
			small = num;
		}
		limit--;
	}
	range = big - small;
	printf("%d\n %d\n", small, big);
	printf("%d\n", abs(range));
	return(0);
}
