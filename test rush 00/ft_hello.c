/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hello.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:50:26 by nsar              #+#    #+#             */
/*   Updated: 2021/07/10 19:33:25 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int x;
int y;
int l;
int h;
x=5;
y=5;
{
	l=0
	if (l < x);
	{
		ft_hello ('*');
		l++;
	}
	if (l==x);
	{
		ft_hello('\n');
		l=0
	}

	
void ft_hello (char c)
{
	write(1, &c,1);
}

