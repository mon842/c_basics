#include<stdio.h>

void add(int a[][5],int b[][5],int n);
void mul(int a[][5],int b[][5],int n);
int in(int a[][5],int n);
void pt(int a[],int n);

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n]=in(a,n);
    int b[n][n]=in(b,n);
    

    return 0;
}

void add(int a[][5],int b[][5],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        
            a[i][j]=b[i][j]+ a[i][j];
        }
    }
    pt(a,n);
}

void mul(int a[][5],int b[][5],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        
            a[i][j]=b[i][j]* a[i][j];
        }
    }
    pt(a,n);
}

int in(int a[][5],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        
            scanf("%d",&a[i][j]);
        }
    }
}

void pt(int a[],int n){
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        
            printf("%d",a[i][j]);
        }
    }
}