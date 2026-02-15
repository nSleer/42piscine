/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:16:18 by marvin            #+#    #+#             */
/*   Updated: 2026/02/15 15:16:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    ft_iterative_factorial(int nb)
{
    int	fact;

    if (nb < 0)
        return (0);
    fact = 1;
    while (nb > 0)
    {
        fact *= nb;
        nb--;
    }
    return (fact);
}