void ft_rev_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        int tmp = tab[i];
        tab[i] = tab[j];
        tab[j] = tmp;
        i++;
        j--;
    }
}
