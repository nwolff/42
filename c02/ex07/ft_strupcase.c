char *ft_strupcase(char *str)
{
    unsigned int i = 0;
    while (str[i] != '\0')
    {
        char c = str[i];
        if (c >= 'a' && c <= 'z')
            str[i] = c + ('A' - 'a');
        i++;
    }
    return str;
}