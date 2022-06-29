#include <stdio.h>

int perfect(int x);

int main()
{
    int n;
    printf("enter the limit\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        perfect(i);
    }

    return 0;
}

int perfect(int x)
{
    int sum = 1;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == x)
    {
        printf("perfect no.\n");
    }
    else
    {
        printf("!perfect no.\n");
    }
}