#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Hay nhap vao so a: ");
    scanf("%d", &a);
    int b;
    printf("Hay nhap vao so b: ");
    scanf("%d", &b);
    if (a > b){
        printf("So a lon hon so b", a > b);
    } else if ( a < b ) {
        printf("So b lon hon so a", b > a);
    } else {
        printf("2 so bang nhau.");
    }
    return 0;
}
