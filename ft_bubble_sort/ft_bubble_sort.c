void    ft_swap(int *n1, int *n2);

void    ft_booble_sort(int vector[], int len)
{
    int i;
    int j;

    i = 0;
    j = 1;
    while (i < len)
    {
        while (j <= len)
        {
            if (vector[i] > vector [j])
            {
                ft_swap(&vector[i], &vector[j]);
                i = 0;
                j = 1;
            }
            else
            {
                i++;
                j++;
            }
        }
    }
}

void    ft_swap(int *n1, int *n2)
{
    int tmp;

    tmp = *n1;
    *n1 = *n2;
    *n2 = tmp; 
}
