#include<stdio.h>
int main(){
    //while loop
    // int n=2;
    // printf("enter digit,,odd to stop\n");
    // while (n%2==0)
    // {
    //     scanf("%d",&n);
    // }
    

    //do while
    // printf("enter digit,,odd to stop\n");
    // int n;
    // do
    // {
    //     scanf("%d",&n);
    // } while (n%2==0);

    //do while -----2
    printf("enter digit,,odd to stop\n");
    int n;
    do
    {
        scanf("%d",&n);
        if(n%2==!0){
            break;
        }
    } while (1);
    
    return 0;
}