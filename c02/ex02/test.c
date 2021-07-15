#include <stdio.h>
#include <string.h>
#include "ft_str_is_alpha.c"

int main(int argc, char *argv[])
{
	char *s0 = "oHai";
	char *s1 = "12a";
	char *s2 = "";
	printf("s = %s, is_alpha? = %d \n", s0, ft_str_is_alpha(s0));
	printf("s = %s, is_alpha? = %d \n", s1, ft_str_is_alpha(s1));
	printf("s = %s, is_alpha? = %d \n", s2, ft_str_is_alpha(s2));
}