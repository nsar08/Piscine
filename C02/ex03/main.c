/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:06:10 by nsar              #+#    #+#             */
/*   Updated: 2021/07/20 16:53:59 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_str_is_numeric(char *str);
int main (void)
{
	char	str[] = "111989079877";
	printf("%d\n", ft_str_is_numeric(str));
}
