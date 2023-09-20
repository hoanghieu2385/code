#include <stdio.h>
#include <math.h>

char mark(int a);

int main(){
    int toan;
    printf("Nhap diem  mon toan cua ban: ");
    scanf("%d", &toan);
    
    char result = mark(toan);
    if ( result == 'A' || result == 'B' || result == 'C' || result == 'D' )
    {
        printf("Ban dat duoc xep hang: %c", result);
    }
    else
        printf("Ban da bi no mon");
    

}

char mark(int a){
    char xephang;
    if ( a >= 8 )
    {
        xephang = 'A';
        return xephang;
    }
    else if ( a >= 6 && a <= 8 )
    {
        xephang = 'B';
        return xephang;
    }
    else if ( a >= 4 && a <= 6 )
    {
        xephang = 'C';
        return xephang;
    }
    else {
        xephang = 'D';
        return xephang;
    }
    
}