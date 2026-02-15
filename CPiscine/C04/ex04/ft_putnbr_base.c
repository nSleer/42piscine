/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:09:43 by marvin            #+#    #+#             */
/*   Updated: 2026/02/15 15:09:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    valid_base(char *base)
{
    int	i;
    int	j;

    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (i >= 2);
}

void    ft_putnbr_base(int nbr, char *base)
{
    long	n;
    int		base_len;
    char	c;

    if (!valid_base(base))
        return ;
    base_len = 0;
    while (base[base_len])
        base_len++;
    n = nbr;
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= base_len)
        ft_putnbr_base(n / base_len, base);
    c = base[n % base_len];
    write(1, &c, 1);
}