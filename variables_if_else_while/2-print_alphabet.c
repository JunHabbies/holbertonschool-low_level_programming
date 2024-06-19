#include <stdio.h>

void ft_print (void)
{
	int a = 'a';

	while (a <= 'z')
	{
		printf("%c", a);
		a++;
	}
	printf("\n");
}

int main (void)
{
	ft_print();
	return (0);
}
