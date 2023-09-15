#include <stdio.h>
#include <math.h>
void main(){
    double a, b, c;
    b = 500000;
    printf("Vui long nhap so tien ban muon rut ");
    scanf("%lf", &a);
    
    int mod = (int)a % 50000;
    if ( a <= b){
        if ( mod == 0)
        {
        c = b - a;
        printf("So du con lai cua ban la: %lf ", c);
        } else
        printf("Vui long nhap lai so tien ban muon rut");
} else
    printf("So tien ban rut khong hop le");
}