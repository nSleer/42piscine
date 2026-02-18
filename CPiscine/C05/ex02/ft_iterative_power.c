/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 16:31:38 by marvin            #+#    #+#             */
/*   Updated: 2026/02/16 17:06:07 by jcosta-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		r *= nb;
		power--;
	}
	return (r);
}
