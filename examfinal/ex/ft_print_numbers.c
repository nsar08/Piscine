/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 10:23:15 by nsar              #+#    #+#             */
/*   Updated: 2021/07/28 10:35:44 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write (1, &c, 1);
}
void ft_print_numbers(void)
{
	char c;
	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}
int main(void)
{
	ft_print_numbers();
	return(0);
}
