#include <unistd.h>

void ft_putstr(char *str);

int ft_strlen(char *str)
{
    int len = 0;
    while (*str)
    {
        str++;
        len++;
    }
    return len;
}

void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}
