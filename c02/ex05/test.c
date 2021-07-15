#include <stdio.h>
#include <string.h>
#include "ft_str_is_uppercase.c"

int main(int argc, char *argv[])
{
	char *s0 = "ABC";
	char *s1 = "aB";
	char *s2 = "";
	printf("s = %s, is_uppercase? = %d \n", s0, ft_str_is_uppercase(s0));
	printf("s = %s, is_uppercase? = %d \n", s1, ft_str_is_uppercase(s1));
	printf("s = %s, is_uppercase? = %d \n", s2, ft_str_is_uppercase(s2));
}