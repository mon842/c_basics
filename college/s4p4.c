#include<stdio.h>
#include<math.h>

int rec(int n,int place);

int main(){
    int oc;
    scanf("%d",&oc);
    int a=rec(oc,0);
    printf("%d\n",a);
    return 0;
}

int rec(int n,int place){
    if (n/8==0)
    {
        return (n%8);
    }
    int oct=((n%8)*pow(10,place))+rec(n/8,place++);
    // printf("%d    +   %d\n",((n%8)*pow(10,place)),rec(n/8,place++));
    return oct;
}