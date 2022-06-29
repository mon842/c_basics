#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter num\n");
    scanf("%d",&n);
    int dup=n;
    int c=0,d=0;
    while (dup!=0)
    {
        d=dup%10;
        c++;
        dup=dup/10;
    }
    dup=n;
    d=0;
    int sum=0;
    while (dup!=0)
    {
        d=dup%10;
        sum=sum+(pow(d,c));
        printf("%d\n",sum);
        dup=dup/10;
    }
    if(sum==n)
    {
        printf("armstrong num");
    }
    else
    {
        printf("!armstrong num");
    }
    
    
    return 0;
}