// Write a program to convert the temperature from centigrade degrees to Fahrenheit degrees. Temperature in centigrade Degree is taken as input from the user
#include<stdio.h>

int main(){
    double t;
    printf("enter the temp in celcius\n");
    scanf("%lf",&t);
    double f=(t * 1.8) + 32;
    printf("temp in  %lf F\n",f);
    return 0;
}

// 5 is also same