/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:06:22 by nsar              #+#    #+#             */
/*   Updated: 2021/07/27 17:57:26 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int *tab;
	int i;
	if (min > max)
		return(NULL);
	else
	tab = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min + i;
		i++;
	}
	return(tab);
}
