/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 10:18:13 by nsar              #+#    #+#             */
/*   Updated: 2021/07/28 10:22:05 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_reverse_alphabet(void)
{
	char c;
	c = 'z';
	while(c > 96)
	{
		ft_putchar(c);
		c--;
	}
}
int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
