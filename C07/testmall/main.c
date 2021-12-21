/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 09:27:06 by nsar              #+#    #+#             */
/*   Updated: 2021/07/27 09:58:06 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr = malloc(sizeof(int));
	if(ptr != NULL)
		printf("Memory created successfully");
	return(0);
}
