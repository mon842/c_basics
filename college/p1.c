// Write  a program  to calculate  the gross salary of an employee   where  basic salary is given by user and the  dearness   allowance   is  40%  of  his  basic  salary  and  house  rent allowance  is 20% of the basic  salary

#include<stdio.h>

int main(){
    double x;
    printf("enter the basic salary\n");
    scanf("%lf",&x);
    double gs=x-(x*0.4)-(x*0.2);
    printf("the gross salary is %lf \n",gs);
    return 0;
}