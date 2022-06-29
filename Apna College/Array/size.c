#include<stdio.h>

int main(){
    int age=20;
    int *ptr=&age;
    printf("%d\n",ptr++);
    printf("%d\n",ptr);
    
    return 0;
}

// the different between the size of per array element is 4 bytes

// Array is pointer

// int *ptr=&a[0]; and  int *ptr=&a; are same 


// int a[10];
// int *ptr=&a[10];

// Mathematical operations can be done with pointer values
// it is based on the data types and not on numbers
/*it gives the difference or addition of size of data types(array, float, etc) and not in numbers*/