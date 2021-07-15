int ft_str_is_uppercase(char *str)
{
    unsigned int i = 0;
    while (str[i] != '\0')
    {
        char c = str[i++];
        if (c < 'A' || c > 'Z')
            return 0;
    }
    return 1;
}