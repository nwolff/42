// From http://facweb.cs.depaul.edu/sjost/it212/documents/ascii-pr.htm
int ft_str_is_printable(char *str)
{
    unsigned int i = 0;
    while (str[i] != '\0')
    {
        char c = str[i++];
        if (c < 32 || c > 127)
            return 0;
    }
    return 1;
}