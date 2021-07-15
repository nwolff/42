#include <stdio.h>
#include <string.h>
#include "ft_str_is_lowercase.c"

int main(int argc, char *argv[])
{
	char *s0 = "abc";
	char *s1 = "aB";
	char *s2 = "";
	printf("s = %s, is_lowercase? = %d \n", s0, ft_str_is_lowercase(s0));
	printf("s = %s, is_lowercase? = %d \n", s1, ft_str_is_lowercase(s1));
	printf("s = %s, is_lowercase? = %d \n", s2, ft_str_is_lowercase(s2));
}