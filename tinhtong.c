#include<stdio.h>
int main(){
	int n1, n2;
	printf("Please, input 2 integer number:");
	scanf("%d%d", &n1, &n2);
	int sum = n1+n2;
	printf("Result: %d + %d = %d", n1, n2, sum);
	return 0;
}
