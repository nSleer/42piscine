#include <unistd.h>

void ft_print_numbers(void){
    int num = 0;
    while (ch <= '9')
    {
        write(1, &num, 1);
        num++;
    }
    
}