#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_is_negative(int n)
{
	char sedi;
	sedi = 'N';

	while(sedi <= 'P')
	{
		ft_putchar(sedi);
		sedi = sedi + 1;
	}
}
int main()
{
	ft_is_negative();

	return 0;
}
