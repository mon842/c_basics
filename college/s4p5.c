#include<stdio.h>

int rec(int n,int x);

int main(){
    int n,i,d;
    scanf("%d",&n);
    d=n;
    for(i = 1; i <= d; i++)
    {
        n--;
        int a=rec(n,n/2);
        if (a==1)
        {
            printf("prime %d \n",n);
        }
        else
        {
            printf("not prime %d \n",n);
        }   
    }
    return 0;
}

int rec(int n,int x){
    if(x==1){
        return 1;
    }
    if (n%x==0)
    {
        return 0;
    }
    return rec(n,x-1);
}