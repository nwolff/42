#include <unistd.h>

void ft_print_comb(void);

void write_ijk(int i, int j, int k, int first_time)
{
	if (!first_time)
		write(1, ", ", 2);

	char buffer[3];
	buffer[0] = i + '0';
	buffer[1] = j + '0';
	buffer[2] = k + '0';
	write(1, buffer, 3);
}

void ft_print_comb(void)
{
	int first_time = 1;
	int i = 0;
	while (i <= 9)
	{
		int j = i + 1;
		while (j <= 9)
		{
			int k = j + 1;
			while (k <= 9)
			{
				write_ijk(i, j, k, first_time);
				first_time = 0;
				k++;
			}
			j++;
		}
		i++;
	}
}