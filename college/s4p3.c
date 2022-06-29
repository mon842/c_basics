#include<stdio.h>

int rec(int n);

int main(){
    int r,n;
    scanf("%d%d",&r,&n);
    int ans=rec(n)/(rec(n-r)*rec(r));
    printf("%d",ans);
    return 0;
}

int rec(int n){
    int f;
    if (n==1)
    {
        return 1;
    }
    f=rec(n-1)*n;
    return f;
}