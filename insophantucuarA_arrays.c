#include<stdio.h>
int main(){
	int A[] = {5, 6, 8, 4, 3, 1, 9, 8};
	int n = sizeof(A)/sizeof(int);
	int i;
	printf("%d\n", n);
	for(i=n-1; i>=0; i--){
		printf("%d ", A[i]);
	}
	return 0;
	
}
