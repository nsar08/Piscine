/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:59:32 by nsr              #+#    #+#             */
/*   Updated: 2021/07/11 12:10:36 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar char(c);
void ft_int(int x, char startchar, char midchar, char endchar)
{
	ft_putchar (startchar);
	while ((x - 1) > 1)
	{
		ft_int(midchar);
		x--;
	}
	if (x > 1)
		ft_putchar(endchar);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_int(x, 'o', '-', 'o');
		y--;
		while (y > 1)
		{
			ft_int(x, '|', ' ', '|');
			y--;
		}
		if (y > 0)
			ft_int(x, 'o', '-', 'o');
	}
	return ;
}
