#include <unistd.h>

void ft_print_combn(int n)
{
    int digits[10];
    int i, j;
    int is_last;

    if (n <= 0 || n >= 10)
        return;

    i = 0;
    while (i < n)
    {
        digits[i] = i;
        i++;
    }

    while (1)
    {
        
        i = 0;
        while (i < n)
        {
            char c = digits[i] + '0';
            write(1, &c, 1);
            i++;
        }

       
        is_last = 1;
        i = 0;
        while (i < n)
        {
            if (digits[i] != 10 - n + i)
                is_last = 0;
            i++;
        }

        if (is_last)
            break;

        write(1, ", ", 2);

        i = n - 1;
        while (i >= 0)
        {
            if (digits[i] < 9 - (n - 1 - i))
            {
                digits[i]++;
                j = i + 1;
                while (j < n)
                {
                    digits[j] = digits[j - 1] + 1;
                    j++;
                }
                break;
            }
            i--;
        }
    }
}
/*
int main(void)
{
    ft_print_combn(2);
    return 0;
}
*/