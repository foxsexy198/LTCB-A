#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d", &n);
	int *A;
	A = (int*)malloc(n*sizeof(int));
	int i;
	for(i=0; i<n; i++)
		scanf("%d", (A+i));
	for(i=n-1; i>=0; i--)
		printf("%d ", *(A+i));
	return 0;
}
