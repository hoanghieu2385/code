#include <stdio.h>
#include <math.h>
int main(){
    int a = 2*3+4/2;
    int b = 3 < 5;
    int c = 10 < 9;
    if ( a && b || c ){
        printf("Dung");
    } else{
        printf("Sai");
    }
    return 0;
}