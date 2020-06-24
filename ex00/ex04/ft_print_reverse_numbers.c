#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_reverse_numbers(void)
{
	char sedi;
	sedi = '9';

	while(sedi >= '1')
	{
		ft_putchar(sedi);
		sedi = sedi - 1;
	}
}
int main()
{
	ft_print_reverse_numbers();

	return 0;
}
