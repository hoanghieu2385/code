#include <stdio.h>
void main (){
    char a;
    do
    {
        printf("Do you love me? (y/n): ");
        scanf("%c", &a);
    } while (a != 'y'  &&  a != 'n');
    if ( a == 'y' || a == 'Y')
    {
        printf("Me too <3");
    } else
        printf("You dont love me! :(( ");
    return 0;
}