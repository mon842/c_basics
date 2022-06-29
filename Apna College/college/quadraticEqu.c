#include<stdio.h>
#include<math.h>
// finding the root
int main(){
    double a,b,c;
    printf("Enter the values of a,b and c of and quadratic equation\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    double D=(b*b)-(4*a*c);
    double root1,root2; 
    if (D>0)
    {
        printf("Value of both the roots are not same\n");
        root1=(b+(sqrt(D)))/(2*a*c);
        root2=(b-(sqrt(D)))/(2*a*c);
        printf("root1 %lf \n",root1);
        printf("root2 %lf \n",root2);
    }
    else if (D==0)
    {
        printf("Value of both the roots are same\n");
        double root= -b/(2*a*c);
        printf("root %lf",root);
    }
    else
    {
        printf("It's an equation with imaginary roots\n");
    }
    
    return 0;
}