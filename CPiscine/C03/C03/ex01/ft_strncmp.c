/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:17:00 by marvin            #+#    #+#             */
/*   Updated: 2026/02/11 13:27:30 by jcosta-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/* 
int	main()
{
	char s1[] = "word";
	char s2[] = "Word";
	int n = 2;

	printf("Or: %d\n", strncmp(s1, s2, n));
	printf("My: %d\n", ft_strncmp(s1, s2, n));
} */