/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 14:06:05 by nsar              #+#    #+#             */
/*   Updated: 2021/07/27 12:05:27 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strdup(char *src);
int main(void)
{
	char *src = "Hello";
	char *ptr;
	printf("%s\n", src);
	printf("%s\n", ft_strdup("Hello"));	
	//printf("%s\n", ft_strdup("Hello"));
	return(0);
}
