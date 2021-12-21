/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 09:57:15 by nsar              #+#    #+#             */
/*   Updated: 2021/07/20 15:45:32 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strcat(char *dest, char *src);
int main(void)
{
	char src[] = "top";
	char dest[] = "shop";
	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%s\n", ft_strcat(src, dest));
}
