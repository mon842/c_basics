#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j+1]>a[j])
            {
                int t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
            
        }
    }
    
    int v;
    scanf("%d",&v);
    a[n]=v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (a[j+1]>a[j])
            {
                int t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
            
        }
    }
    
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}