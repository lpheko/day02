#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_numbers(void)
{
	char sedi;
	sedi = '1';

	while(sedi <= '9')
	{
		ft_putchar(sedi);
		sedi = sedi + 1;
	}
}
int main()
{
	ft_print_numbers();

	return 0;

}
