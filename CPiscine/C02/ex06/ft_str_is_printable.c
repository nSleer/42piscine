/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:57:44 by marvin            #+#    #+#             */
/*   Updated: 2026/02/11 13:22:32 by jcosta-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 33 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/* 
int	main(void)
{
	char	*str1 = "aB3/!'.;Ko+";
	char	*str2 = "aB3/!'.;Ko±";

	printf("%s is printable? %d\n", str1, ft_str_is_printable(str1));	
	printf("%s is printable? %d\n", str2, ft_str_is_printable(str2));
} */