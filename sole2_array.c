#include<stdio.h>

void sole(int A[], int n){
	int i, sum=0, count=0;
	for(i=0; i<n; i++){
		if(A[i]%2==1){
			sum=1;
			count++;
		}
	}
	if(sum){
		printf("%d\n", count);
		
		for(i=0; i<n; i++){
			if(A[i]%2==1)
			printf("%d ", A[i]);
				
		}
	}
	else
		printf("0\nNONE");
}

int main(){
	int n, i;
	scanf("%d", &n);
	int A[n];
	for(i=0; i<n; i++)
		scanf("%d", &A[i]);
	sole(A, n);
	return 0;
}


