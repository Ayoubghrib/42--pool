#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_printcomb(int x, int y)
{
    ft_putchar(x / 10 + '0');
    ft_putchar(x % 10 + '0');
    write(1, " ", 1);
    ft_putchar(y / 10 + '0');
    ft_putchar(y % 10 + '0');
    if (x != 98)
    {
        write(1, ",", 1);
    }
}

void ft_printcomb2()
{
    int a;
    int b;

    a = 0;
    while (a < 99)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_printcomb(a, b);
            b++;
        }
        a++;
    }
}

int main()
{
	ft_printcomb2();
}
