int ft_str_is_numeric(char *str)
{
    unsigned int i = 0;
    while (str[i] != '\0')
    {
        char c = str[i++];
        if (c < '0' || c > '9')
            return 0;
    }
    return 1;
}