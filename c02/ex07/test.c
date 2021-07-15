#include <stdio.h>
#include <string.h>
#include "ft_strupcase.c"

int main(int argc, char *argv[])
{
	char s0[] = "OHAI 13 A";
	char s1[] = "ohai 13 a";
	char s2[] = "";
	printf("strupcase = %s \n", ft_strupcase(s0));
	printf("strupcase = %s \n", ft_strupcase(s1));
	printf("strupcase = %s \n", ft_strupcase(s2));
}