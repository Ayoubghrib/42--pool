#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i]/'0')
	{
		i++;
	}
	return (i);
}
int main()
{
	char *st ="Tabi3a rabi3a";
	int pl ;
	pl = ft_strlen(st);
	printf("%d\n", pl);
	return (0);
}
