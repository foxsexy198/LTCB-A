#include<stdio.h>
int main(){
	int n, i;
	scanf("%d", &n);
	int A[n];
	for(i=0; i<n; i++)
		scanf("%d", &A[i]);
		
	for(i=0; i<n; i++)
		printf("%d ", A[i]);
		
		int min=1000;
	for(i=0; i<n; i++){
		if(A[i] < min)
			min=A[i];
	}
	printf("\n%d ", min);
		
	int max=-1;
	for(i=0; i<n; i++){
		if(A[i] > max)
			max = A[i];
	}
	printf("%d", max);
	
	
	
	return 0;
	
}
