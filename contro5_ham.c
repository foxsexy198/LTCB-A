#include<stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int c=5, d=10;		// con tro: giup dia chi cua c va a trung nhau//
	swap(&c, &d);		// lay gia tri moi//		//dia chi cua d va b trung nhau//
	printf("a = %d\nb = %d", c, d);
	return 0;
}
