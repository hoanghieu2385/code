#include <stdio.h>
int main(){
	
	printNameOfStudent();
	
	return 0;

}
void printNameOfStudent(){
	char name[50]; //name[50] la string aka mang ki tu
	// scanf("%^s", name);
	gets(name);
	// printf"%s", name);
	puts(name);
}
