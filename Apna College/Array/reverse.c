#include<stdio.h>

int rev(int m[],int n);

int main(){
    int m[]={4,5,6,8};
    rev(m,4);
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t",m[i]);
    }
    
    return 0;
}

int rev(int m[],int n){
    int c=n-1;
    for (int i = 0; i < n/2; i++)
    {
        int t=m[i];
        m[i]=m[c];
        m[c]=t;
        c--;
    }
    
}
