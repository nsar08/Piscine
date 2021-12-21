/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:47:04 by nsar              #+#    #+#             */
/*   Updated: 2021/07/20 17:02:41 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);
int main(void)
{
	unsigned int nb = 1;
	char src[] = "top";
	char dest[] = "shop";
	printf("%s\n", ft_strncat(src, dest, nb));
}
