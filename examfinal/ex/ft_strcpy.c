/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:36:10 by nsar              #+#    #+#             */
/*   Updated: 2021/07/29 10:14:45 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] !='\0')
	{
		dest [i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}	
int main(void)
{
	char a[]= "Hello";
	char b[]= "Salut";
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", ft_strcpy(b, a));
}
