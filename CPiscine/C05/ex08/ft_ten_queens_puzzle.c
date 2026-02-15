/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 16:37:39 by marvin            #+#    #+#             */
/*   Updated: 2026/02/15 16:37:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    is_safe(int board[10][10], int row, int col)
{
    int	i;
    int	j;

    i = 0;
    while (i < col)
    {
        if (board[row][i])
            return (0);
        i++;
    }
    i = row;
    j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j])
            return (0);
        i--;
        j--;
    }
    i = row;
    j = col;
    while (i < 10 && j >= 0)
    {
        if (board[i][j])
            return (0);
        i++;
        j--;
    }
    return (1);
}

int    solve_nq_util(int board[10][10], int col, char *r, int *count)
{
    if (col >= 10)
    {
        write(1, r, 10);
        write(1, "\n", 1);
        (*count)++;
        return (1);
    }
    int	i;
    for (i = 0; i < 10; i++)
    {
        if (is_safe(board, i, col))
        {
            board[i][col] = 1;
            r[col] = '0' + i;
            solve_nq_util(board, col + 1, r, count);
            board[i][col] = 0;
        }
    }
    return (0);
}

int    ft_ten_queens_puzzle(void)
{
    int	board[10][10] = {0};
    char	r[11] = {0};
    int	count = 0;

    solve_nq_util(board, 0, r, &count);
    return (count);
}