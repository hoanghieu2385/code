#include <stdio.h>
main(){
    int num; 
    printf("\nThe even numbers from 1 to 25 are:\n\n");
    for(num=2; num <= 25; num += 2)
        printf("%d\n", num);
}