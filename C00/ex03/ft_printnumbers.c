#include <unistd.h>
#include <stdio.h>
int ft_printnumber()
{
	write(1,"0123456789\n", 11);
}
int main()
{
	ft_printnumber();
}
