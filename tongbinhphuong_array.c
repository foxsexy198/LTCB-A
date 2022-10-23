#include<stdio.h>
#include<math.h>

int bp(int A[], int n){
	int i, s=0;
	for(i=0; i<n; i++)
		s += pow(A[i], 2);
		
	return s;
}

int main(){
	int n, i;
	scanf("%d", &n);
	int A[n];
	for(i=0; i<n; i++){
		scanf("%d", &A[i]);	
	}
	for(i=0; i<n; i++){
		printf("%d ", A[i]);
	}

	printf("\n%d", bp(A, n));
	return 0;
	
}
