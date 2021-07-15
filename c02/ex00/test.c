#include <stdio.h>
#include <string.h>
#include "ft_strcpy.c"

int main(int argc, char *argv[])
{
	char *s = "ohai";
	char copy[5];
	ft_strcpy(copy, s);
	printf("copy = %s, len(copy) = %d \n", copy, strlen(copy));
}