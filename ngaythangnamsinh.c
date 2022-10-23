#include<stdio.h>
int main(){
	unsigned int a, b, c;
	scanf("%u",&a);
	scanf("%u",&b);
	scanf("%u",&c);
	printf("%02u/%02u/%04u", a, b, c);
	return 0;
}
