/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:29:49 by jcosta-r          #+#    #+#             */
/*   Updated: 2026/02/11 16:36:08 by jcosta-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lend;
	unsigned int	lens;
	unsigned int	r;
	unsigned int	i;

	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	r = 0;
	if (size > lend)
		r = lens + lend;
	else
		r = lens + size;
	i = 0;
	while (src[i] && lend <= size)
	{
		dest[lend] = src[i];
		lend++;
		i++;
	}
	dest[lend] = '\0';
	return (r);
}
