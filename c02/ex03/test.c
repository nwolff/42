#include <stdio.h>
#include <string.h>
#include "ft_str_is_numeric.c"

int main(int argc, char *argv[])
{
	char *s0 = "123";
	char *s1 = "12a";
	char *s2 = "";
	printf("s = %s, is_numeric? = %d \n", s0, ft_str_is_numeric(s0));
	printf("s = %s, is_numeric? = %d \n", s1, ft_str_is_numeric(s1));
	printf("s = %s, is_numeric? = %d \n", s2, ft_str_is_numeric(s2));
}