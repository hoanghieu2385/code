#include <stdio.h>
#include <math.h>
void main(){
    int arr[5];
    int i, min, sum, avg;
    sum = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i+1 );
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    min = arr[0];
    for ( i = 1; i < 5; i++)
    {
        if ( arr[i] < min)
        min = arr[i];
    }
    printf("\nThe number min is: %d", min);
    avg = sum/5;
    printf("\nThe sum is: %d", sum);
    printf("\nThe avg is: %d", avg);
}