#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int main(int argc, char *argv[])
{
	int div = 42;
	int mod = 5;
	ft_ultimate_div_mod(&div, &mod);
	printf("div = %d,  mod = %d \n", div, mod);
}