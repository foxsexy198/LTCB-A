#include<stdio.h>

int main(){
	int a=19;
	printf("Gia tri: %d\n", a);
	printf("Dia chi: %d\n", &a);
	int *pointer;
	pointer = &a;
	printf("Gia tri: %d\n", *pointer);
	printf("Dia chi: %d\n", pointer);
	*pointer = 27;
	printf("Gia tri: %d\n", a);
	printf("Dia chi: %d", &a);
	return 0;
}
