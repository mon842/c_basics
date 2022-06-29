#include<stdio.h>

int main(){
    // checking if the number is divisible by 2 or not
    int a;
    printf("enter the number to check");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("%d divisible by 2",a);
    }
    else{
        printf("%d not divisible by 2",a);
    }
    
    return 0;
}