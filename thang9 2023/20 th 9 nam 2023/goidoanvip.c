#include <stdio.h>

void monan();
void menu(char luachon);
float bill(char luachon, int soluong);

int main()
{
    char luachon;
    int soluong;

    do {
        monan();
        printf("Nhap lua chon cua ban: ");
        scanf("%c", &luachon);
        if ( luachon != 'd' )
        {
            printf("Nhap so luong do an ban muon mua: ");
            scanf("%d", &soluong);
            menu(luachon);
            float tongtien = bill(luachon, soluong);
            printf("Cua ban het: $%.3f\n\n\n\n\n", tongtien);
        }
    } while (luachon != 'd');
    return 0;
}

void monan()
{
    printf("********** Quan An VIPP **********\n");
    printf("a. Banh mi xuc xich\n");
    printf("b. Banh mi pate\n");
    printf("c. Banh mi cha ca\n");
    printf("d. Quit\n");
}

void menu(char luachon)
{
    switch ( luachon ) {
        case 'a':
            printf("Ban da oder Banh mi xuc xich\n");
            break;
        case 'b':
            printf("Ban da oder Banh mi pate\n");
            break;
        case 'c':
            printf("Ban da oder Banh mi cha ca\n");
            break;
        default:
            printf("Gia tri khong hop le. Vui long thu lai.\n");
    }
}

float bill(char luachon, int soluong)
{
    printf("lua chon la: %c\n", luachon);
    printf("So luong la: %d\n", soluong);
    float giatien;

    switch (luachon)
    {
    case 'a':
        giatien = 20;
        break;
    case 'b':
        giatien = 15;
        break;
    case 'c':
        giatien = 10;
        break; 
    default:
        giatien = 0;
    }
    return giatien * soluong;
}