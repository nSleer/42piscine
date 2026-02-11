/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:44:30 by marvin            #+#    #+#             */
/*   Updated: 2026/02/11 13:18:46 by jcosta-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "Hello";
// 	char	dest[10];
// 	unsigned int	i;
// 	char	c;

// 	ft_strncpy(dest, src, 10);
// 	i = 0;
// 	while (i < 10)
// 	{
// 		c = dest[i];
// 		write(1, &c, 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }