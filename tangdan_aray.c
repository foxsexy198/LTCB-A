#include<stdio.h>

void xuatmang(int A[], int n){
	int i;
	for(i=0; i<n; i++)
		printf("%d ", A[i]);
}

void tang(int A[], int n){
	int i, min, j;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(A[j] < A[i]){
				min = A[i];
				A[i] = A[j];
				A[j] = min;
			}
		}
		
	}
	for(i=0; i<n; i++)
		printf("%d ", A[i]);
}

int main(){
	int n;
	scanf("%d", &n);
	int A[n];
	int i;
	for(i=0; i<n; i++)
		scanf("%d", &A[i]);
	xuatmang(A, n);
	printf("\n");
	tang(A,n);
	
	return 0;
}
