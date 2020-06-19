#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_alphabet(void)
{
	char sedi;
	sedi = 'a';
	
	while(sedi <= 'z')
	{
		ft_putchar(sedi);
		sedi = sedi + 1;
	}
}
int main()
{
	ft_print_alphabet();

	return 0;
}
