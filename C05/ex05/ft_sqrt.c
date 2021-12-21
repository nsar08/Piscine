/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 13:00:16 by nsar              #+#    #+#             */
/*   Updated: 2021/07/25 11:41:28 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	square;

	square = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	while ((square * square) < nb && (square <= 46340))
	{
		square++;
	}
	while ((square * square) == nb)
	{
		return (square);
	}
	return (0);
}
