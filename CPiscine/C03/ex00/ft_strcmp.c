/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:12:44 by marvin            #+#    #+#             */
/*   Updated: 2026/02/10 23:12:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while ((s1[i] || s2[i]) && (s1[i] == s2[i]))
    {
        i++;
    }
    return (s1[i] - s2[i]);
    
}

/* 
int	main(void)
{
	char	*s1 = "word";
	char	*s2 = "Word";

	printf("My: %d\n", ft_strcmp(s1, s2));
} */