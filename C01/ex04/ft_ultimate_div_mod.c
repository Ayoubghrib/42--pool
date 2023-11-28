#include <unistd.h>
#include <stdio.h>
void	ft_div_mod(int *a, int *b)
{
	int div;
	int mod ;
	div = *a/ *b;
	mod = *a % *b;
	
	*a = div;
	
	*b= mod;
	
}
int main()
{
	int a = 550;
	int b = 100;
	ft_div_mod(&a, &b);
	printf("a = %d\nb = %d\n", a,b);
}
