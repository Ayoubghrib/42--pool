#include <unistd.h>
#include <stdio.h>
char    ft_printalphabet()
{
write (1,"abcdefghijklmnopqrstuvwxyz\n", 27);
}
int main()
{
    ft_printalphabet();
    return 0;

}
