#include <stdio.h>

int main()
{
    int j = 0;
    int arr[10], n, i, sum = 0, n1, n2;
    printf("enter the lower bound:");
    scanf("%d", &n1);
    printf("enter the upper bound:");
    scanf("%d", &n2);
    for (n = n1; n <= n2; n++)
    {   
        sum=0;
        for (i = 1; i < n; i++)
        {   
            if (n % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == n)
        {
            arr[j] = n;
            j++;
        }
    }
    printf("perfect numbers:");
    for (i = 0; i < j; i++)
    {
        printf("%d,", arr[i]);
    }
    return 0;
}