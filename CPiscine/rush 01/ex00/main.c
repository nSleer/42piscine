/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:00:56 by marvin            #+#    #+#             */
/*   Updated: 2026/02/08 14:00:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rush01.h"
// Main function to initialize data, parse input, solve the puzzle, and print the result
int	main(int argc, char **argv)
{
	int grid[SIZE][SIZE];
	int clues[SIZE * SIZE];

	if (argc != 2 || !parse_input(argv[1], clues))
	{
		print_error();
		return (0);
	}

	init_data(grid);
	if (!ft_solve(grid, clues, 0))
	{
		print_error();
		return (0);
	}

	print_grid(grid);
	return (0);
}
