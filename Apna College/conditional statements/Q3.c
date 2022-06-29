#include<stdio.h>
#include <math.h>

int main(){
    double n,result;
    printf("enter a digit \n");
    scanf("%lf",&n);
    int dup=n;
    double d=0;
    double c=0;
    double sum=0;
    while (dup!=0)
    {
        d=dup%10;
        c++;
        dup=dup/10;
    }

    // printf("%d \n",c);
    dup=n;
    while (dup!=0)
    {
        d=dup%10;
        result = pow(d,c);
        printf("%lf \n",result);
        sum=sum+result;
        dup=dup/10;
    }
    printf("%lf \n",sum);
    if (sum==n)
    {
        printf("armstrong %lf \n",n);
    }
    else
    {
        printf("not armstrong %lf \n",n);
    }
    
    return 0;
}