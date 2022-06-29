// Online C compiler to run C program online
#include<stdio.h>

int len(char a[]);

int main(){
    char n[100];
    fgets(n,100,stdin);
    int l=len(n);
    puts(n);
    printf("%d\n",l);
    return 0;
}

int len(char a[]){
    int l=0;
    for(int i=0;a[i]!='\0';i++){
        l++;
    }
    return l-1;
}