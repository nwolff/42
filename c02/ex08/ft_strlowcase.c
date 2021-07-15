char *ft_strlowcase(char *str)
{
    unsigned int i = 0;
    while (str[i] != '\0')
    {
        char c = str[i];
        if (c >= 'A' && c <= 'Z')
            str[i] = c + ('a' - 'A');
        i++;
    }
    return str;
}