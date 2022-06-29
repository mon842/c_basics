#include<stdio.h>

int in(int *ptr,int n,int x);

int main(){
    int x;
    scanf("%d",&x);
    int n;
    scanf("%d",&n);
    int m[n][10]=in(m[n][10],n,x);
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         m[i][j]=j*x;
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int in(int *ptr,int n,int x){
    int c=1;
    for (int i = 0; i < n; i++)
    {
        c=1;
        for (int j = 0; j < 10; j++)
        {
            *(ptr++)=c*x;
            c++;
            // *ptr++;
        }
    }
}