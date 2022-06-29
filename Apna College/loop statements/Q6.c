#include<stdio.h>
int main(){
        
    int n,f;
    f=0;
    printf("enter\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0){
            f++;
        }
    }
    // printf("%d",f);
    if (f==2)
    {
        printf("it's a prime no");
    }
    else{
        printf("it's not a prime no");
    }
    return 0;
}