int main(void)
{
    int i, j, k;

    i = -1;
    while (++i < 8)
    {
        j = i;
        while (++j < 9)
        {
            k = j;
            while (++k < 10)
            {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');
                if (i != 7 || j != 8 || k != 9)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    return (0);
}
