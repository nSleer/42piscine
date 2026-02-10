/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 21:35:16 by marvin            #+#    #+#             */
/*   Updated: 2026/02/10 21:35:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_hexcalc(unsigned char c)
{
    char    *hex;

    hex = "0123456789abcdef";
    ft_putchar(hex[c / 16]);
    ft_putchar(hex[c % 16]);
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 32 || str[i] == 127)
        {
            ft_putchar("\\");
            ft_hexcalc(str[i]);
        }
        else 
        {
            ft_putchar(str[i]);
        }
        i++;
        
    }
}

/*  
int	main(void)
{
	char *str = "Ola\nesta bem?";
	ft_putstr_non_printable(str);
} */