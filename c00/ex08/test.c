#include "ft_print_combn.c"

int main(int argc, char *argv[])
{
	const char newline = '\n';
	ft_print_combn(1);
	write(1, &newline, 1);
	ft_print_combn(2);
}