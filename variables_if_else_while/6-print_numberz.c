#include <stdio.h>
#include <unistd.h>


void ft_print (void)
{
	int a = '0';

	while (a <= '9')
	{
		write(1, &a, 1);
		a++;
	}
	write(1,"\n",1);
}

int main(void)
{
	ft_print();
	return (0);
}
