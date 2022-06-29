#include<stdio.h>

int main(){
    int yr;
    printf("Enter a valid year\n");
    scanf("%d",&yr);
    if (yr%4==0 && yr%100!=0 || yr%400==0)
    {
        printf("the year %d is a leap",yr);
    }
    else
    {
        printf("the year %d is not a leap",yr);
    }
    
    return 0;
}