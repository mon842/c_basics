#include<stdio.h>

double fac(int n);

int main(){
    double sum=1.0;
    int n;
    printf("enter the series limit\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum=sum+fac(i)*((i+1)+(i+2));
    }
    
    printf("sum of series %lf",sum);
    return 0;
}

double fac(int n){
    // printf("%d\n",n);
    double f=1.0;
    for (int i = 1; i <=n; i++)
    {
        f=f*i;
    }
    
    return f;
}