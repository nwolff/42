#include <unistd.h>

void ft_print_comb2(void);

void ft_print_comb2(void)
{
	char separator[] = ", ";
	int first_time = 1;
	char buffer[5];
	buffer[2] = ' ';
	for (int i = 0; i <= 99; i++)
	{
		buffer[0] = (i / 10) + '0';
		buffer[1] = (i % 10) + '0';
		for (int j = i + 1; j <= 99; j++)
		{
			buffer[3] = (j / 10) + '0';
			buffer[4] = (j % 10) + '0';
			if (first_time)
				first_time = 0;
			else
				write(1, separator, 2);
			write(1, buffer, 5);
		}
	}
}