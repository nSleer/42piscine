/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:39:27 by jcosta-r          #+#    #+#             */
/*   Updated: 2026/02/11 16:43:10 by jcosta-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	str[] = "Hello";
// 	int		len;

// 	len = ft_strlen(str);
// 	write(1, &"0123456789"[len], 1);
// 	write(1, "\n", 1);
// 	return (0);
// }