#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    printf("enter the quadratic equation values a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    int D=(b*b)-(4*a*c);
    if (D==0)
    {
        printf("the quadratic equation has only one root\n");
        int r=(-b)/(2*a);
        printf("%d",r);
    }
    else if (D>0)
    {
        printf("the equation has two real and distinct roots\n");
        int r1=-b+(sqrt(D))/(2*a);
        int r2=-b-(sqrt(D))/(2*a);
        printf("r1= %d r2=%d",r1,r2);
    }
    else
    {
        printf("the equation has two complex roots\n");
    }
    
    return 0;
}