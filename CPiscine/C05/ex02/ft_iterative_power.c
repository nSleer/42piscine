/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 16:31:38 by marvin            #+#    #+#             */
/*   Updated: 2026/02/15 16:31:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    ft_iterative_power(int nb, int power)
{
    int	r;

    if (power < 0)
        return (0);
    r = 1;
    while (power > 0)
    {
        r *= nb;
        power--;
    }
    return (r);
}