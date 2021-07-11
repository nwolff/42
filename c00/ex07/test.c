#include <unistd.h>
#include <limits.h>
#include "ft_putnbr.c"

int main(int argc, char *argv[])
{
	const char newline = '\n';
	ft_putnbr(0);
	write(1, &newline, 1);
	ft_putnbr(42);
	write(1, &newline, 1);
	ft_putnbr(-42);
	write(1, &newline, 1);
	ft_putnbr(INT_MAX);
	write(1, &newline, 1);
	ft_putnbr(INT_MIN);
}
