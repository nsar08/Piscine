/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_MC_condition_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:40:36 by mchalard          #+#    #+#             */
/*   Updated: 2021/07/18 18:40:41 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    condition2(int viewpoints[4][4], int grid[4][4])
{
    int n;

    n = 0;
    while ( n < 4)
    {
        if (viewpoints[0][n] == 1)
        grid[0][n] = 4;

        if (viewpoints[1][n] == 1)
            grid[3][n] = 4;

        if (viewpoints[2][n] == 1)
            grid[n][0] = 4;

        if (viewpoints[3][n] == 1)
            grid[n][3] = 4;
                
        n++;
    }
}
