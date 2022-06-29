#include<stdio.h>

void gcd(int a ,int b);
void lcm(int a ,int b);

int main(){
    printf("enter 2 digits for lcm and gcd");
    int x,y;
    scanf("%d%d",&x,&y);
    gcd(x,y);
    lcm(x,y);
    return 0;
}

void gcd(int a ,int b){
    int s,g;
    int f=1;
    if (a>b){
        s=b;
        g=a;
    }
    else{
        s=a;
        g=b;
    }
    int d=0;
    while (g%s!=0)
    {
        d=g%s;
        if(d==0){
            break;
        }
        else{
            s=d;
            b=s;
        }
    }
    printf(" gcd %d",s);
}
void lcm(int a ,int b){
    int s;
    int f=1;
    if (a>b){
        s=b;
    }
    else{
        s=a;
    }
    for (int i = 2;i<s;i++)
    {
        if(a%i==0 && b%i==0)
        {
            f=f*i;
            a=a/i;
            b=b/i;
        }
        
    }
    f=f*a*b;
    printf(" lcm %d",f);
}

