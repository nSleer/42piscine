/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:19:42 by marvin            #+#    #+#             */
/*   Updated: 2026/02/05 22:19:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void repeat_alpha(char *str)
{
    int i;
    int j;
    int rep;

    i = 0;

    while (str[i] != '\0')
    {
        rep = 0;

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            rep = str[i] - 'a' + 1;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            rep = str[i] - 'A' + 1;
        }
        else
        {
           write(1, &str[i], 1);
           i++;
           continue;
        }

        j = 0;

        while (j < rep)
        {
            write(1, &str[i], 1);
            j++;
        }
        
        i++;
    }

    write(1, "\n", 1);
    
}

int main(void){
    repeat_alpha("abcde42!!");
    return 0;
}