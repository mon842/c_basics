#include<stdio.h>

int main(){
    printf("enter the numbers to be checked\n");
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        max=a;
    }
    else if (b>a && b>c)
    {
        max=b;
    }
    else
    {
        max=c;
    }
    printf("the greatest number is %d",max);
    return 0;
}