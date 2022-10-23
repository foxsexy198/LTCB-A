#include<stdio.h>
int main(){
	unsigned int a,b,c,d;
	scanf("%u",&a);
	scanf("%u",&b);
	scanf("%u",&c);
	scanf("%u",&d);
	printf("Ban sinh ngay %02u thang %02u nam %04u. Nam nay, ban %u tuoi.", a, b, c,(d-c));
	return 0;
}
