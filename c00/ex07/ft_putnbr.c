#include <unistd.h>

void ft_putnbr(int nb);

void ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return;
	}

	long l = nb; // We use a long because we need to contain -INT_MIN which is one larger than INT_MAX

	if (l < 0)
	{
		write(1, "-", 1);
		l = -l;
	}

	char buffer[10]; // INT_MAX is 2147483647, it has 10 digits.
	int index = sizeof(buffer) - 1;

	while (l)
	{
		char digit = l % 10;
		buffer[index--] = digit + '0';
		l = l / 10;
	}

	write(1, buffer + index, 10 - index); // XXX: pointer arithmetic is a bit rough for beginners?
}