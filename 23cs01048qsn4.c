#include <stdio.h>

int main()
{
    int n, i, j, p, k, l, count = 0;
    printf("enter the number");
    scanf("%d", &n);
    for (i = 4; i <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else
            {
                continue;
            }
        }
        if (j != i)
        {
            p = n - i;
            for (k = 2; k < p; k++)
            {
                if (p % k == 0)
                {
                    break;
                }
            }
            if (k != p && p >= i)
            {
                printf("%d %d\n", p, i);
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("it cannot be expressed in that form");
    }
    return 0;
}