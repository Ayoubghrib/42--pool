#include <unistd.h>
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main()
{
	int div ;
	int mod ;
	int a ;
	int b;
	a = 104;
	b = 15;
ft_div_mod( a, b, &div, &mod);
printf("%d \n", div);
printf("%d \n", mod);

}

