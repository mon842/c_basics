#include<stdio.h>

void lop(int a[],int n);
void pt(int a[],int n);

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    lop(a,n);
    return 0;
}

void lop(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j+1]>a[j])
            {
                int t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
            
        }
    }
    pt(a,n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j+1]<a[j])
            {
                int t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
            
        }
    }
    pt(a,n);
}

void pt(int a[],int n){
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}