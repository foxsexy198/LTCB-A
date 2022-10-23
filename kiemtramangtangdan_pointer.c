#include<stdio.h>
#include<stdlib.h>
int isSort(int A[], int *n){
	//A = (int*)malloc(n*sizeof(int));
	int i, tang = 1;
	for(i=0; i<n; i++){
		if( A[i+1]< A[i])
			tang = 0;
	}
	return tang;
}

int main(){
//		int A[]={-1,-3, -1, 5,7};
//	int n = sizeof(A)/sizeof(int);
//	printf("%d",isSort(A,n));

int A[]={-1,1,4, 5,10, 15};
int n = sizeof(A)/sizeof(int);
if (isSort(A,n))
    printf("YES");
else
    printf("NO");
return 0;
}
