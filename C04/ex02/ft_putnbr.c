/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:09:50 by nsar              #+#    #+#             */
/*   Updated: 2021/07/25 10:17:53 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putnbr(nbr / 10);
		ft_putchar('8');
	}
	else if (nbr >= 0 && nbr < 10)
	{
		ft_putchar(nbr + '0');
	}
	else if (nbr < 0 )
	{
		ft_putchar ('-');
		ft_putnbr (nbr * (-1));
	}
	else
	{
		ft_putnbr (nbr / 10);
		ft_putnbr (nbr % 10);
	}
}
