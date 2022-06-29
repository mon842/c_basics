#include<stdio.h>

int main(){
    int yr;
    printf(" enter year \n");
    scanf("%d",&yr);
    if (yr%4==0)
    {
        if (yr%100==0)
        {
            if (yr%400==0)
            {
                printf("a leap year");
            }
            else{
                printf("not a leap year");
            }
            
        }
        else{
            printf("a leap year");
        }
        
    }
    else
    {
        printf("not a leap year");
    }
    
    return 0;
}