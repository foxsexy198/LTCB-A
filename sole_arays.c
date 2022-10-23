#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i;
	scanf("%d", &n);
	
	int *A;
	A = (int*)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++){
		scanf("%d", (A+i));
	}
	for(i=0; i<n; i++){
		printf("%d ", *(A+i));
	}
	int count=0;
	for(i=0; i<n; i++){
		if(*(A+i)%2==1)
			count+=1;
	}
	printf("\n%d\n", count);
	for(i=0; i<n; i++){
		if(*(A+i)%2==1)
			printf("%d ", *(A+i));
	}
	return 0;
}
