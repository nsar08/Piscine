/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:15:17 by nsar              #+#    #+#             */
/*   Updated: 2021/07/29 12:05:24 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	while (str[i]!= '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			if (str[i] < 'A' || str[i] > 'Z')
				return(0);
		}
			i++;
	}
		return(1);
}
int main(void)
{
	char str[] = "dgagdhj";
	printf("%d\n", ft_str_is_alpha(str));
}
