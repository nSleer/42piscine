/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:01:05 by marvin            #+#    #+#             */
/*   Updated: 2026/02/08 14:01:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

// Recursive backtracking solver
int	ft_solve(int grid[SIZE][SIZE], int *clues, int pos)
{
	int row;
	int col;
	int num;

	if (pos == SIZE * SIZE)
		return (1);

	row = pos / SIZE;
	col = pos % SIZE;
	num = 1;
    // Try placing numbers 1 to SIZE in the current cell
	while (num <= SIZE)
	{
		if (can_place(grid, row, col, num))
		{
			grid[row][col] = num;
			if ((col == SIZE - 1 && !check_row(grid, clues, row))
				|| (row == SIZE - 1 && !check_col(grid, clues, col)))
				grid[row][col] = 0;
			else if (ft_solve(grid, clues, pos + 1))
				return (1);
			else
				grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
