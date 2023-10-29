#include <stdio.h>
#include <math.h>

int main(){
	float t, v, a, td;
	printf("Vui long nhap diem toan, van, anh cua ban: ");
	scanf("%f%f%f", &t, &v, &a);
	td = t*2 + v*2 + a;
	if(td>=40) {
		printf("Pass");
} 
else{
	printf("Fail");
	}
return 0;
}

