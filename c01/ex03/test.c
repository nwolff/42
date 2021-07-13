#include <stdio.h>
#include "ft_div_mod.c"

int main(int argc, char *argv[])
{
	int div;
	int mod;
	ft_div_mod(42, 5, &div, &mod);
	printf("div = %d,  mod = %d \n", div, mod);
}