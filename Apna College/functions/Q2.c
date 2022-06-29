#include<stdio.h>
double a,b;
char s;
//making a calculator to take 2 inputs
double ans();

int main(){  
    

    printf("enter sign\n");
    scanf("%c",&s);
    printf("enter 2 digits to be calculated\n");
    scanf("%lf%lf",&a,&b);
    
    
    ans();
    return 0;
}


double ans(){
    double ans=0.0;
    if (s=='+')
    {
        ans=a+b;
    }
    else if (s=='-')
    {
        ans=a-b;
    }
    else if (s=='X')
    {
        ans=a*b;
    }
    else if (s=='/')
    {
        ans=a/b;
    }
    else
    {
        printf("error msg\n");
    }
    printf("the ans= %lf\n",ans);
    return ans;
}