/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:41:56 by marvin            #+#    #+#             */
/*   Updated: 2026/02/11 12:59:25 by jcosta-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "Hello";
// 	char	dest[6];
// 	int		i;
// 	char	c;

// 	ft_strcpy(dest, src);
// 	i = 0;
// 	while (dest[i])
// 	{
// 		c = dest[i];
// 		write(1, &c, 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }