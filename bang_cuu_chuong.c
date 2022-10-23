#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	printf("%d Times Table\n", n);
	printf("====================\n");
	int i, nhan=0;
	for(i=1; i<=10; i++){
		nhan=n*i;
		printf("%d x %d = %d\n", n, i, nhan);
	}
	return 0;
}
