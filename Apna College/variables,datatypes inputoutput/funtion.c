#include<stdio.h>// preprocessor directive
#include <math.h>

int main()// there can be only one main funtion
{
    double x, n, result;
    printf("Enter a base number: ");
    scanf("%lf", &x);
    printf("Enter an exponent: ");
    scanf("%lf", &n);

    // calculates the power
    result = pow(x, n);

    printf("%.1lf^%.1lf = %.2lf", x, n, result);
    return 0;
}

/* cases

1. integer:
printf("%d",i);


2. Real number:
printf("%f",n);



3. characters:
printf("%c",char);
*/