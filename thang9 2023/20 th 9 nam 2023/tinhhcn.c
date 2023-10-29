#include <stdio.h>
#include <math.h>

int chuvi(int a, int b);
int dientich(int a, int b);

int main()
{   int l, w;
    printf("Chieu dai: ");
    scanf("%d", &l);
    printf("Chieu rong: ");
    scanf("%d", &w);
    int result1 = chuvi( l, w);
    printf("Chu vi hinh chu nhat: %d\n", result1);
    int result2 = dientich( l, w);
    printf("Dien tich hinh chu nhat: %d\n", result2);
}

int chuvi(int a, int b){
    int c;
    c = 2 * ( a + b); 
    return c;
}

int dientich(int a, int b){
    int c;
    c = a * b;
    return c;
}
