/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:04:03 by jcosta-r          #+#    #+#             */
/*   Updated: 2026/02/04 14:47:29 by jcosta-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_num(int n1, int n2)
{
	ft_putchar((n1 / 10) + '0');
	ft_putchar((n1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((n2 / 10) + '0');
	ft_putchar((n2 % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	i1;
	int	i2;

	i1 = 00;
	while (i1 < 99)
	{
		i2 = i1 + 1;
		while (i2 <= 99)
		{
			ft_num(i1, i2);
			if (!(i1 == 98 && i2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			i2++;
		}
		i1++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
