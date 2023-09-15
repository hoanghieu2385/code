#include <stdio.h>

void main(){
    int username, password, menu;
    printf("\nVui long nhap tai khoan: ");
    scanf("%d", &username);
    printf("\nVui long nhap mat khau: ");
    scanf("%d", &password);
    if ( username == 123 && password == 456){
        printf("Vui long nhap lua chon cua ban: ");
        printf("Menu: \nMac dinh: Lavie \n1: Cafe \n2: Tra sua \n3: Tra Xanh \n");
        printf("Lua chon cua ban la: ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("Ban da oder thanh cong 1 coc cafe");
            break;
        case 2:
            printf("Ban da oder thanh cong 1 coc tra sua");
            break;
        case 3:
            printf("Ban da oder thanh cong 1 coc xanh");
            break;
        default:
            printf("Ban da chon 1 chai Lavie");
            break;
        }

    } else 
        printf("Vui long nhap lai tai khoan!");
}