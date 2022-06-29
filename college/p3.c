// Write a program to calculate the area and perimeter of a circle, where the radius of the circle is taken as input
#include<stdio.h>

int main(){
    double r;
    printf("enter the radius\n");
    scanf("%lf",&r);
    double a=3.14*(r*r);
    double p=2*3.14*r;
    printf("area %lf\n",a);
    printf("perimeter %lf\n",p);
    return 0;
}