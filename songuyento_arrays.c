#include <stdio.h>
#include <math.h>

int isPrime(int n){
	int k, flag=1;
	if(n==1)
		flag=0;
	for(k=2; k<=sqrt(n); k++)
		if(n%k==0){
			flag=0;
			break;
		}
		return flag;
}

int main(){
	int n;
	scanf("%d", &n);
	int A[n], i;
	for(i=0; i<n; i++)
		scanf("%d", &A[i]);
	for(i=0; i<n; i++)
		printf("%d ", A[i]);
	int count=0;
	for(i=0; i<n; i++){
		if(isPrime(A[i]))
			count++;
	}
	printf("\n%d\n", count);
	for(i=0; i<n; i++){
		if(isPrime(A[i]))
			printf("%d ", A[i]);
	}
	return 0;
	
}
