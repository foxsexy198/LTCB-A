#include<stdio.h>
int main(){
	int n1, n2;
	scanf("%d%d", &n1, &n2);
	if (n1==n2)//kiem tra n1 co bang n2 ha khong nhe
		printf("Result: %d=%d", n1, n2);
	else if(n1>n2)
		printf("Result: %d>%d", n1, n2);
	else
		printf("Result: %d<%d", n1, n2);
	return 0;
}
