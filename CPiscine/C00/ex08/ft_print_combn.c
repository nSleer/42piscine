/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:44:35 by marvin            #+#    #+#             */
/*   Updated: 2026/02/09 12:44:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_comb_num(int *num, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        ft_putchar(num[i] + '0');
        i++;
    }
}

void    ft_print_combn(int n)
{
    int num[10];
    int i;

    if (n <= 0 || n >= 10)
        return ;
    i = 0;
    while (i < n)
    {
        num[i] = i;
        i++;
    }
    while (num[0] <= 10 - n)
    {
        ft_comb_num(num, n);
        if (num[0] < 10 - n)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        num[n - 1]++;
        i = n - 1;
        while (i > 0 && num[i] > 9 - (n - 1 - i))
        {
            i--;
            num[i]++;
            num[i + 1] = num[i] + 1;
        }
    }
}