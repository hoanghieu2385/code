#include <stdio.h>
#include <math.h>

void main ()
{
    int arr [5];
    int i, high, total;
    total = 0;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter value %d: ", i+1 );
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    high = arr[0];
    for ( i = 1; i < 5; i++)
    {
        if (arr[i] > high)
        high = arr[i];
    }

    printf("The max number is: %d", high);
    printf("\nTotal is: %d", total);
    return 0;
}