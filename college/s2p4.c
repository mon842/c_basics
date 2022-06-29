
#include<stdio.h>

int main(){
    int n;
    printf("enter num \n");
    scanf("%d",&n);
    int dup=n,d=0,rev=0;
    while (dup!=0)
    {
        d=dup%10;
        rev=rev*10+d;
        dup=dup/10;
    }
    if (rev==n)
    {
        printf("is armstrong %d",rev);
    }
    else
    {
        printf("is not armstrong%d",rev);
    }
    return 0;
}