#include <stdio.h>
#include <string.h>
#include "ft_str_is_printable.c"

int main(int argc, char *argv[])
{
	char *s0 = "ABC 123 : ";
	char *s1 = "a\tB";
	char *s2 = "";
	printf("s = %s, is_printable? = %d \n", s0, ft_str_is_printable(s0));
	printf("s = %s, is_printable? = %d \n", s1, ft_str_is_printable(s1));
	printf("s = %s, is_printable? = %d \n", s2, ft_str_is_printable(s2));
}