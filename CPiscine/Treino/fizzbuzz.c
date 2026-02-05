#include <unistd.h>


void ft_putnbr(int nb)
{
    char c;

    if (nb >= 10){
        ft_putnbr(nb / 10);
    }
    c = (nb % 10) + '0';
    write(1, &c, 1);
}

void ft_fizzbuzz(void)
{
    int num = 1;
    while (num <= 100)
    {
        if (num % 3 == 0 && num % 5 == 0)
        {
            write(1, "fizzbuzz ", 9);
        }
        else if (num % 3 == 0)
        {
            write(1, "fizz ", 5);
        }
        else if (num % 5 == 0)
        {
            write(1, "buzz ", 5);
        }
        else
        {
            ft_putnbr(num);
        }
        write(1, "\n", 1);
        num++;
    }
}