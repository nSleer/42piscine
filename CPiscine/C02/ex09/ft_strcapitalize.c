/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:07:17 by marvin            #+#    #+#             */
/*   Updated: 2026/02/09 15:07:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (i == 0 ||
            !((str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
            (str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
            (str[i - 1] >= '0' && str[i - 1] <= '9')))
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
        else
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        }
        i++;
    }
    return (str);
}

/* 
int	main(void)
{
	char	str[] = "OLA, tudo BEM? 42palavras QUARENTA-e-duas; cinquenta+E+UM";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strcapitalize(str));
} */