#include <unistd.h>
#include <stdio.h>
void ft_ft(int *nbr)
{
	*nbr = 42;
}
int main()
{
	int *nb;
	int num;

	nb = &num;

	ft_ft(nb);
	printf("%d\n", *nb);

	return (0);
}
