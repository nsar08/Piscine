/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 19:03:37 by nsar              #+#    #+#             */
/*   Updated: 2021/07/15 19:08:57 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char	a[] = "Salut";
	char	b[] = "Hello";
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", ft_strcpy(b, a));
}
