/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 12:55:54 by marvin            #+#    #+#             */
/*   Updated: 2026/02/08 14:01:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rush01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}
// Function to print the grid in the required format
void	print_grid(int grid[SIZE][SIZE])
{
	int i;
	int j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			ft_putchar(grid[i][j] + '0');
			if (j < SIZE - 1)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
// Function to initialize the grid with zeros
void	init_data(int grid[SIZE][SIZE])
{
	int i;
	int j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}
