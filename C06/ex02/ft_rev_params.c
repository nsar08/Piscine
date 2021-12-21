/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:59:25 by nsar              #+#    #+#             */
/*   Updated: 2021/07/25 11:45:50 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char	*str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	argc--;
	i = argc;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i--;
	}
	return (0);
}
