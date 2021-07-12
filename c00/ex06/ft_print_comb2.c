#include <unistd.h>

void ft_print_comb2(void);

void write_ij(int i, int j, int first_time)
{
	if (!first_time)
		write(1, ", ", 2);

	char buffer[5];
	buffer[0] = (i / 10) + '0';
	buffer[1] = (i % 10) + '0';
	buffer[2] = ' ';
	buffer[3] = (j / 10) + '0';
	buffer[4] = (j % 10) + '0';
	write(1, buffer, 5);
}

void ft_print_comb2(void)
{
	int first_time = 1;
	int i = 0;
	while (i <= 99)
	{
		int j = i + 1;
		while (j <= 99)
		{
			write_ij(i, j, first_time);
			first_time = 0;
			j++;
		}
		i++;
	}
}