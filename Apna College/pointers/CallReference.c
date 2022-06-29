#include<stdio.h>

int square(int n);
int _square(int *n);

int main(){
    int x=3;
    
    printf("the square is %d \n",square(x));
    printf("the number is %d \n",x);
    
    printf("the square is %d \n",_square(&x));
    printf("the number is %d \n",x);// the number will be changed as here in pointers we are working with it's address
    return 0;
}


//call by value------ we pass value of variable as argument
int square(int n){
    n=n*n;
    return n;
}

//call by reference------ we pass address of variable as argument
int _square(int *n){
    *n=(*n) * (*n);
    return *n;
}