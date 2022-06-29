#include <stdio.h>
// sum of n number of numbers
int sum(int s);

int main(){
    int s;
    printf("enter num \n");
    scanf("%d",s);
    int a=sum(s);
    printf("%d",a);
    return 0;
}

int sum(int s){
    if (s==0)
    {
        return 1;
    }
    
    int sumnum=sum(s-1);
    int sumN=sumnum+s;
    return sumN;
}