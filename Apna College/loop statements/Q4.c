#include<stdio.h>
int main(){
    printf("enter a number");
    int n,f;
    f=1;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        f=f*i;
    }
    printf("%d",f);
    
    
    return 0;
}