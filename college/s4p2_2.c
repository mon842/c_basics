#include<stdio.h>

int rec(int n);

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("%d,",rec(i));
    }
    
    return 0;
}

int rec(int n){
    int f=0;
    if (n==1)
    {
        return 1;
    }
    if (n==0)
    {
        return 0;
    }
    f=rec(n-1)+rec(n-2);
    return f;
}