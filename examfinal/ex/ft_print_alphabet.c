/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 09:55:15 by nsar              #+#    #+#             */
/*   Updated: 2021/07/28 10:15:45 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_alphabet(void)
{
	char c;
	c ='a';
		while (c < 123)
		{
			ft_putchar(c);
			c++;
		}
}
int main(void)
{
	ft_print_alphabet();
		return(0);
}
