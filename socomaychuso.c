#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n>0 && n<10)
		printf("%4d co 1 chu so", n);
	if(n>=10 && n<100)
		printf("%d co 2 chu so", n);
	if(n>=100 && n<1000)
		printf("%d co 3 chu so", n);
	if(n>=1000 && n<10000)
		printf("%d co 4 chu so", n);
	return 0;
}
