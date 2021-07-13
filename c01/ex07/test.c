#include <stdio.h>
#include "ft_rev_int_tab.c"

int main(int argc, char *argv[])
{
	int a[] = {1, 10, 42};
	printf("a = [%d, %d, %d]\n", a[0], a[1], a[2]);
	ft_rev_int_tab(a, 3);
	printf("a = [%d, %d, %d]\n", a[0], a[1], a[2]);
}