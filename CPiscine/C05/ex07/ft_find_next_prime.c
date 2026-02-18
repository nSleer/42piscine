/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 16:37:06 by marvin            #+#    #+#             */
/*   Updated: 2026/02/18 14:20:09 by jcosta-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	test;

// 	test = 6; 
// 	printf("Input: %d\n", test);
// 	printf("Next prime: %d\n", ft_find_next_prime(test));

// 	return (0);
// }
