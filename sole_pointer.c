#include<stdio.h>
#include<stdlib.h>

int sole(int A[], int n){
	int i, count = 0;
	for(i=0; i<n; i++){
		if(A[i]%2==1)
			count+=1;
	}
	return count;
}

void print_sole(int A[], int n){
	int i;
	for(i=0; i<n; i++){
		if(A[i]%2==1)
			printf("%d ", A[i]);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int *A;
	A = (int*)malloc(n*sizeof(int));
	int i;
	for(i=0; i<n; i++)
		scanf("%d", (A+i));
	for(i=0; i<n; i++)
		printf("%d ", *(A+i));
	printf("\n%d\n", sole(A,n));
	print_sole(A, n);
	return 0;
		
}
