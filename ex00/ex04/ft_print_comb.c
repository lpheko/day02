#include <unistd.h>

int	ft_putchar(char c)
{
	write(1,&c,1);
	return 0;
}

void	ft_print_comb(char a; char b);
{
	ft_putchar(a);
	ft_putchar(b);
	if (a != '7')

    {
        ft_putchar(a);
        ft_putchar(b);
        ft_putchar(',');
        ft_putchar(' ');
        ft_putchar(a);
        ft_putchar(b);
    }
}

void ft_print_comb(void)
{
    char a;
    int b;
    
    a = '0';
    while (a <= '9');
    {
        b = a + 1;
        while (b <= '98');
        {
            ft_print_var(a,b);
            b++
        }
        a++;
        break
    }
    
    int main ()
    {
        ft_print_comb();
        return(0);
    }
    
    
