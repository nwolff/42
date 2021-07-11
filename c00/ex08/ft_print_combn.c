#include <unistd.h>

void ft_print_combn(int n);

void helper(int digit_count, int start_digit, char *buffer, int buffer_index, int *first_time)
{
	char separator[] = ", ";
	if (digit_count == 0)
	{
		if (*first_time)
			*first_time = 0;
		else
			write(1, separator, 2);
		write(1, buffer, sizeof(buffer));
		return;
	}

	for (char digit = start_digit; digit <= 9; digit++)
	{
		buffer[buffer_index] = digit + '0';
		helper(digit_count - 1, digit + 1, buffer, buffer_index + 1, first_time);
	}
}

void ft_print_combn(int n)
{
	char buffer[n];
	int first_time = 1;
	helper(n, 0, buffer, 0, &first_time);
}