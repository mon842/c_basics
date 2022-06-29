// Write a program to calculate the area and perimeter of the rectangle, where the length and breadth   of the rectangle are taken as inputs.
#include<stdio.h>

int main(){
    double l,b;
    printf("enter the length and breath\n");
    scanf("%lf%lf",&l,&b);
    double a=l*b;
    double p=(2*l)+(2*b);
    printf("area %lf\n",a);
    printf("perimeter %lf\n",p);
    return 0;
}