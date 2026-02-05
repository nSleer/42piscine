/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:09:58 by jcosta-r          #+#    #+#             */
/*   Updated: 2026/02/04 12:54:51 by jcosta-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comb_num(int n1, int n2, int n3)
{
	ft_putchar(n1 + '0');
	ft_putchar(n2 + '0');
	ft_putchar(n3 + '0');
}

void	ft_print_comb(void)
{
	int	ic1;
	int	ic2;
	int	ic3;

	ic1 = 0;
	while (ic1 <= 7)
	{
		ic2 = ic1 + 1;
		while (ic2 <= 8)
		{
			ic3 = ic2 + 1;
			while (ic3 <= 9)
			{
				ft_comb_num(ic1, ic2, ic3);
				if (!(ic1 == 7 && ic2 == 8 && ic3 == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ic3++;
			}
			ic2++;
		}
		ic1++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
