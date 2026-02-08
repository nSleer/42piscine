#include "rush01.h"

int	parse_input(char *input, int *clues)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (input[k])
	{
		if (i >= SIZE * SIZE)
			return (0);
		if (input[k] >= '1' && input[k] <= '4')
		{
			clues[i] = input[k] - '0';
			i++;
		}
		else if (input[k] != ' ')
			return (0);
		k++;
	}
	return (i == SIZE * SIZE);
}

int	ft_rowchecker(int grid[SIZE][SIZE], int row, int num)
{
	int col = 0;
	while (col < SIZE)
	{
		if (grid[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	ft_colchecker(int grid[SIZE][SIZE], int col, int num)
{
	int row = 0;
	while (row < SIZE)
	{
		if (grid[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	can_place(int grid[SIZE][SIZE], int row, int col, int num)
{
	return (ft_rowchecker(grid, row, num) && ft_colchecker(grid, col, num));
}

int	count_visible(int *line)
{
	int i = 0;
	int max = 0;
	int visible = 0;

	while (i < SIZE)
	{
		if (line[i] > max)
		{
			max = line[i];
			visible++;
		}
		i++;
	}
	return (visible);
}

int	check_row(int grid[SIZE][SIZE], int *clues, int row)
{
	int line[SIZE];
	int i = 0;

	while (i < SIZE)
	{
		line[i] = grid[row][i];
		i++;
	}
	if (count_visible(line) != clues[row + SIZE * 2])
		return (0);
	i = 0;
	while (i < SIZE)
	{
		line[i] = grid[row][SIZE - 1 - i];
		i++;
	}
	return (count_visible(line) == clues[row + SIZE * 3]);
}

int	check_col(int grid[SIZE][SIZE], int *clues, int col)
{
	int line[SIZE];
	int i = 0;

	while (i < SIZE)
	{
		line[i] = grid[i][col];
		i++;
	}
	if (count_visible(line) != clues[col])
		return (0);
	i = 0;
	while (i < SIZE)
	{
		line[i] = grid[SIZE - 1 - i][col];
		i++;
	}
	return (count_visible(line) == clues[col + SIZE]);
}
