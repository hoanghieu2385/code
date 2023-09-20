#include <stdio.h>
void draw_rec(int s);
int main(){
    int size;
    printf("Canh co 3 ngoi sao\n");
    draw_rec(3);

    printf("Mot doan code khac ....");
    printf("Canh co 5 ngoi sao\n");
    draw_rec(5);

    printf("Ban muon co bao nhieu ngoi sao o canh ?");
    scanf("%d", &size);
    draw_rec(size);
    
    return 0;
}
void draw_rec(int s){
    printf("\nVe hinh vuong moi nao: ");
    for (int i = 0; i < s; ++i) {
        printf("\n");
        for (int j = 0; j < s; ++j)
        {
            printf("*");
        }
    }
    printf("\n DONE \n");
}