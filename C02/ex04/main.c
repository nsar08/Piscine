/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:40:39 by nsar              #+#    #+#             */
/*   Updated: 2021/07/19 10:03:16 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_str_is_lowercase(char *str);
int main(void)
{
	char	str1[] = "ac345";
	printf("%d\n", ft_str_is_lowercase(str1));
}