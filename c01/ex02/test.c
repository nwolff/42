#include <stdio.h>
#include "ft_swap.c"

int main(int argc, char *argv[])
{
	int i = 1;
	int j = 42;
	ft_swap(&i, &j);
	printf("i = %d,  j = %d \n", i, j);
}