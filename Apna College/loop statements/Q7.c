#include <stdio.h>
int main()
{
    int n, f;
    printf("enter\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        f = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                f++;
            }
        }
        if (f == 2)
        {
            printf("it's a prime no %d \n",i);
        }
    }

    return 0;
}