#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else 
		ft_putchar(nb + 48);
}

int main()
{
	int nb;
	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write (1, "fizzbuzz", 8);
		if (nb % 3 == 0)
			write (1, "fizz", 4);
		else if (nb % 5 == 0)
			write (1, "buzz", 4);
		else 
			ft_putnbr(nb);
		ft_putchar('\n');
	   nb++;
	}
}	
