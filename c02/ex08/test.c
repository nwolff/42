#include <stdio.h>
#include <string.h>
#include "ft_strlowcase.c"

int main(int argc, char *argv[])
{
	char s0[] = "ohai 13 a";
	char s1[] = "OHAI 13 A";
	char s2[] = "";
	printf("strlowcase = %s \n", ft_strlowcase(s0));
	printf("strlowcase = %s \n", ft_strlowcase(s1));
	printf("strlowcase = %s \n", ft_strlowcase(s2));
}