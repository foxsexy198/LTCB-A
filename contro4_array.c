#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i;
	scanf("%d", &n);
	//int A[n];
	
	int *A;
	A = (int*)malloc(n*sizeof(int));		// kcap phat vung nho cho mang//
	
	for(i=0; i<n; i++)
		scanf("%d", (A+i));
		
	for(i=0; i<n; i++)
		printf("%d ", *(A+i));
		
		
	return 0;	
}
