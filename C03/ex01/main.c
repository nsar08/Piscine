/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:27:20 by nsar              #+#    #+#             */
/*   Updated: 2021/07/21 09:49:37 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);
int main (void)
{
	unsigned int n = 3;
	char str1[]= "54336";
	char str2[]= "gtrl";
	printf("%d\n", ft_strncmp(str1, str2, n));
	printf("%d\n", strncmp(str1, str2, n));
}
