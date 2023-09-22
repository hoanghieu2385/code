#include <stdio.h>
#include <math.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
void hienthi();
void ketqua( char option );

int main()
{
    int x, y, ketqua;
    printf("Enter number one: ");
    scanf("%d", &x);
    printf("Enter number two: ");
    scanf("%d", &y);
    int result1 = sum(x, y);
    printf("Sum is: %d\n", result1);
    int result2 = sub(x, y);
    printf("Subtraction is: %d\n", result2);
    int result3 = mul(x, y);
    printf("Multiplication is: %d\n", result3);
    int result4 = div(x, y);
    printf("Division: %d\n", result4);


}
int sum(int a, int b) {
    int c;
    c = a + b;
    return c;
}

int sub(int a, int b) {
    int c;
    c = a - b;
    return c;
}

int mul(int a, int b) {
    int c;
    c = a * b;
    return c;
}

int div(int a, int b) {
    int c;
    c = a / b;
    return c;
}
