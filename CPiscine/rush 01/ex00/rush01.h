#ifndef RUSH01_H
#define RUSH01_H

#include <unistd.h>
#define SIZE 4

// Function prototypes
void	ft_putchar(char c);
void	print_error(void);
void	print_grid(int grid[SIZE][SIZE]);
void	init_data(int grid[SIZE][SIZE]);
// Validation and solving functions
int		parse_input(char *input, int *clues);
int		can_place(int grid[SIZE][SIZE], int row, int col, int num);
int		ft_solve(int grid[SIZE][SIZE], int *clues, int pos);
// Check functions for rows and columns
int		check_row(int grid[SIZE][SIZE], int *clues, int row);
int		check_col(int grid[SIZE][SIZE], int *clues, int col);
int		count_visible(int *line);

#endif
