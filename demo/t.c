#include <stdio.h>
#include <math.h>

int main(){
    int i, r, k;
    printf("Vui long nhap vao so i: ");
    scanf("%d", &i);
    r = ++i % 7;
    printf("ket qua cua r la: %d\n", r);
    k = i++ % 7;
    printf(" ket qua cua k la: %d", k);
    return 0;
}