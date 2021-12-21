/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 10:36:02 by nsar              #+#    #+#             */
/*   Updated: 2021/07/28 10:42:53 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_is_negative(int n)
{
	if(n >= 0)
	{
		ft_putchar('P');
		n++;
	}
	else
	{
		ft_putchar('N');
		n++;
	}
}
int main(void)
{
	ft_is_negative(56265);
	return(0);
}
