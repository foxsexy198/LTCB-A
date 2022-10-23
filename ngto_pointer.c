#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int ngto(int n){
	int i, flag=1;
	if(n<=1)
		flag=0;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0){
			flag=0;
		}
	}
	return flag;
}

int count_ngto(int A[], int n){
	int i, count=0;
	for(i=0; i<n; i++){
		if(ngto(A[i]))
			count+=1;
	}
	return count;
}

void print_ngto(int A[], int n){
	int i;
	for(i=0; i<n; i++){
		if(ngto(A[i]))
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
	
	printf("\n%d\n", count_ngto(A,n));
	print_ngto(A, n);
	return 0;
}
