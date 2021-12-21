/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_MC_condition_1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:55:21 by mchalard          #+#    #+#             */
/*   Updated: 2021/07/18 19:07:25 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	condition1col( int viewpoints[4][4], int grid[4][4])
{
	int	n;

	n = 0;
	while (n < 4)
	{
		if (viewpoints[0][n] == 4)
		{
			grid [0][n] = 1;
			grid [1][n] = 2;
			grid [2][n] = 3;
			grid [3][n] = 4;
		}
		if (viewpoints[1][n] == 4)
		{
			grid [0][n] = 4;
			grid [1][n] = 3;
			grid [2][n] = 2;
			grid [3][n] = 1;
		}
		n++;
	}
}

void	condition1row(int viewpoints[4][4], int grid[4][4])
{
	int	n;

	n = 0;
	while (n < 4)
	{
		if (viewpoints[2][n] == 4)
		{
			grid[n][0] = 1;
			grid[n][1] = 2;
			grid[n][2] = 3;
			grid[n][3] = 4;
		}
		if (viewpoints[3][n] == 4)
		{
			grid[n][0] = 4;
			grid[n][1] = 3;
			grid[n][2] = 2;
			grid[n][3] = 1;
		}
		n++;
	}
}
