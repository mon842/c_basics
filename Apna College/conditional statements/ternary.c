#include<stdio.h>
#include <math.h>

// ternary oparator 
int main(){
    // int a;
    // printf("enter\n");
    // scanf("%d",&a);
    // a>=18?printf("adult"):printf("underaged");


    double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &exp);

    // calculates the power
    result = pow(base, exp);

    printf("%.1lf^%.1lf = %.2lf", base, exp, result);

    return 0;
}