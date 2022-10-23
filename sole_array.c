#include<stdio.h>
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
	int count=0;
	for(i=0; i<n; i++){
		if(A[i]%2==1)
			count+=1;
	}
	printf("\n%d\n", count);
	for(i=0; i<n; i++){
		if(A[i]%2==1)
			printf("%d ", A[i]);
	}
	return 0;
}
