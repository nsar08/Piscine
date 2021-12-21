/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 11:03:00 by nsar              #+#    #+#             */
/*   Updated: 2021/07/16 11:43:03 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);
int main(void)
{
	unsigned int n = 5;
	char a[] ="Salutation";
	char b[] = "Hello";
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", ft_strncpy(b, a, n));
}
