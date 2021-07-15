#include <stdio.h>
#include <string.h>
#include "ft_strncpy.c"

int main(int argc, char *argv[])
{
	char *s = "ohai";
	char copy[5];
	ft_strncpy(copy, s, 5);
	printf("copy = %s, strlen(copy) = %d \n", copy, strlen(copy));

	// As per the documentation for strncpy, copying too few bytes results in a non-null terminated string
	ft_strncpy(copy, s, 1);
	printf("copy = %s, strlen(copy) = %d \n", copy, strlen(copy));
}