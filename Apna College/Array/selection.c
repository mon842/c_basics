#include <stdio.h>

int main()
{
    int A[100], n, i, j, k, min, pos, temp;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        scanf("%d", &A[i]);
    for (i = 0; i < n - 1; ++i)
    {
        min = A[i];
        pos = i;
        for (j = i + 1; j < n; ++j)
        {
            if (A[j] < min)
                min = A[j];
            pos = j;
        }
        temp = A[i];
        A[i] = A[pos];
        A[pos] = temp;
        for (k = 0; k < n; ++k)
            printf("% d	", A[k]);
        printf("\n");
    }
    return 0;
}
