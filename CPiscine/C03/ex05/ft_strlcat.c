/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:29:49 by jcosta-r          #+#    #+#             */
/*   Updated: 2026/02/18 15:17:56 by jcosta-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lend;
	unsigned int	lens;
	unsigned int	i;
	unsigned int	og_lend;

	i = 0;
	lend = 0;
	lens = ft_strlen(src);
	og_lend = 0;
	while (lend < size && dest[lend] != '\0')
		lend++;
	og_lend = lend;
	if (lend >= size)
		return (size + lens);
	while ((src[i] != '\0') && (lend + i < size - 1))
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (og_lend + lens);
}

#include <stdio.h>

int main(void)
{
    char buf[10] = "teste  ";
    char *src = "1234515";

    unsigned int ret = ft_strlcat(buf, src, sizeof(buf));
    printf("buf = %s, return = %u\n", buf, ret);

    return 0;
}

