int ft_str_is_lowercase(char *str)
{
    unsigned int i = 0;
    while (str[i] != '\0')
    {
        char c = str[i++];
        if (c < 'a' || c > 'z')
            return 0;
    }
    return 1;
}