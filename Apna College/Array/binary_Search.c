#include<stdio.h>

int main()
{
    int A[100], n, k, i, mid, low, high;
    scanf("%d%d", &n, &k);
    for (i = 0; i < n; ++i)
        scanf("%d", &A[i]);
    low = 0;
    high = n - 1;
    mid = low + (high - low) / 2;
    while (high >= low)
    {
            printf("low = %d, high = %d, mid = %d, A[%d] =  %d\n", low, high, mid, mid, A[mid]);
             if (A[mid] == k) 
                {
            printf("%d is found\n", k);
            break;
              }
            if (k < A[mid]) 
                   high = mid - 1; 
            else 
                   low = mid + 1;
            mid = low + (high - low)/2;
    }
    if (high < low)
        printf("%d is not found\n", k);
    return 0;
}
