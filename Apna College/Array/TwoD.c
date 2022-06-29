#include<stdio.h>


int print(int *p);


int main(){
    // 2 D array
    int arr[2][3]={{1,3,2},{4,6,7}}; // declare
    print(arr);
    return 0;
}

int print(int *p){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",*(p++));
        }
        printf("\n");
    }
    
}