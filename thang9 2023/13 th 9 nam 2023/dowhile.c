#include <stdio.h>
void main (){
    char a;
    int i = 1;
    do
    {
        printf("\nDo you love me? (y/n): ");
        scanf("%c", &a);
        i++;
    } while ((a != 'y'  &&  i <= 3));
    printf("You still don't love me");

    return 0;
}