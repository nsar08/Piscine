/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:01:32 by nsar              #+#    #+#             */
/*   Updated: 2021/07/14 19:29:39 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	stocka;
	int	stockb;

	stocka = *a;
	stockb = *b;
	*a = stocka / stockb;
	*b = stocka % stockb;
}
