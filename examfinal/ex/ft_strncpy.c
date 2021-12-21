/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 10:15:30 by nsar              #+#    #+#             */
/*   Updated: 2021/07/29 11:13:25 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char *ft_strncpy(char  *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;
	while ((i < n) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}
int main(void)
{
	unsigned int n;
	n = 5;
	char a []= "Salutation";
	char b[] = "Hello";
	printf("%s\n", ft_strncpy(b, a, n));
}
