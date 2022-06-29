#include<stdio.h>

int main(){
    int n,max,min;
    scanf("%d",&n);
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[i];
    max=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    
}