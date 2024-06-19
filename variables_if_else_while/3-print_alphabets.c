#include <stdio.h>

void ft_print (void)
{
	int a = 'a';

	while (a <= 'z')
	{
		printf("%c", a);
		a++;
	}
}

void ft_print_upper(void)
{
	int a = 'A';

	while (a <= 'Z')
	{
		printf("%c", a);
		a++;
	}
	printf("\n");
}

int main(void)
{
	ft_print();
	ft_print_upper();
	return (0);
}
