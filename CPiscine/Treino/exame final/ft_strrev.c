#include <unistd.h>

char	*ft_strrev(char *str){
    int i = 0;
    int len = 0;
    int temp = 0;

    while (str[len] != '\0')
        len++;
    len--;

    while (len > i)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return (str);
    
}