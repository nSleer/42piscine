/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:43:21 by jcosta-r          #+#    #+#             */
/*   Updated: 2026/02/18 16:25:58 by jcosta-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

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

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*c;

	i = 0;
	len = ft_strlen(src);
	c = malloc(len + 1);
	if (c == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
