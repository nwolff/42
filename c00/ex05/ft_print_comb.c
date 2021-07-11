#include <unistd.h>

void ft_print_comb(void);

void ft_print_comb(void)
{
	char separator[] = ", ";
	int first_time = 1;
	char buffer[3];
	for (int i = 0; i <= 9; i++)
	{
		buffer[0] = i + '0';
		for (int j = i + 1; j <= 9; j++)
		{
			buffer[1] = j + '0';
			for (int k = j + 1; k <= 9; k++)
			{
				buffer[2] = k + '0';
				if (first_time)
					first_time = 0;
				else
					write(1, separator, 2);
				write(1, buffer, 3);
			}
		}
	}
}