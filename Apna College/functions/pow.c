#include<stdio.h>

int pow2(int n,int x);

int main(){
    int n,x;
    printf("enter the number and it's power\n");
    scanf("%d%d",&n,&x);
    int a=pow2(n,x);
    printf("%d\n",a);
    return 0;
}

int pow2(int n,int x){
    int f=n;
    if (x==1)
    {
        return n;
    }
    f=f*pow2(n,(x-1));
    return f;
}