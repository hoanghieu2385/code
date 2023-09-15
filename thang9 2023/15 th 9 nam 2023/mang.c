#include <stdio.h>
#include <math.h>
void main(){
    int arr[5];
    int i, max, min, sum, avg;
    sum = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i+1 );
        scanf("%d", &arr);
        sum += arr[i];
    }
    max = arr[0];
    for (i = 0; i < 5; i+1)
    {
        if ( arr[i] > max)
        max = arr[i];
    }
    min = arr[0];
    for ( i = 0; i < 5; i+1)
    {
        if ( arr[i] < min)
        min = arr[i];
    }
    

    printf("\nThe number max is: %d", max);
    printf("\nThe number min is: %d", min);
    printf("\nThe sum is: %d", sum);
}