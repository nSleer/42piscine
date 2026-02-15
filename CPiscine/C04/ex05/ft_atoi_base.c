/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:12:59 by marvin            #+#    #+#             */
/*   Updated: 2026/02/15 15:12:59 by marvin           ###   ########.fr       */
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

int    char_to_value(char c, char *base)
{
    int	i;

    i = 0;
    while (base[i])
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int    ft_atoi_base(char *str, char *base)
{
    int	i;
    int	sign;
    int	r;
    int	b_len;

    if (!valid_base(base))
        return (0);
    b_len = 0;
    while (base[b_len])
        b_len++;
    i = 0;
    while (str[i] <= 32)
        i++;
    sign = 1;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    r = 0;
    while (char_to_value(str[i], base) != -1)
    {
        r = r * b_len + char_to_value(str[i], base);
        i++;
    }
    return (r * sign);
}