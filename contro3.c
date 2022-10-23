#include<stdio.h>

int main(){
	int a=19;
	printf("Gia tri: %d\n", a);
	printf("Dia chi: %d\n", &a);
	int *pointer;
	pointer = &a;
	printf("Gia tri: %d\n", *pointer);   //con tro: khi in gia tri thi *pointer//
	printf("Dia chi: %d\n", pointer);		// khi in dia chi thi chi rieng no thoi: pointer//
	*pointer = 27;
	printf("Gia tri: %d\n", a);
	printf("Dia chi: %d\n", &a);
	int *q;
	q=pointer;//dia chi cua q bang dia chi cua pointer//
	printf("Gia tri: %d\n", *q);
	printf("Dia chi: %d\n", q);
	return 0;
}
