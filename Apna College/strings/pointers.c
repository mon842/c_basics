#include<stdio.h>

int main(){
    char *canChange="ifiwei wewfef";
    puts(canChange);
    canChange="ewopo www";
    puts(canChange);

    char *canChange[]="ifiwei wewfef";
    puts(canChange);
    canChange="ewopo www";
    puts(canChange);
    return 0;
}