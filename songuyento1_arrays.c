#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int A[n], i;
	for(i=0; i<n; i++){
		scanf("%d", &A[i]);
	}
	for(i=0; i<n; i++){
		printf("%d ", A[i]);
	}
	int count=0;
	for(i=0; i<n; i++){
		int k, flag=1;
		if(A[i]==1)
			flag=0;
		for(k=2; k<=sqrt(A[i]); k++){
			if(A[i]%k==0){
				flag=0;
			    break;
			}
		}
		if(flag)
			count++;
	}
	printf("\n%d\n", count);
	for(i=0; i<n; i++){
		int k, flag=1;
		if(A[i]==1)
			flag=0;
		for(k=2; k<=sqrt(A[i]); k++){
			if(A[i]%k==0){
				flag=0;
			    break;
			}
		}
		if(flag)
			printf("%d ", A[i]);
	}
	return 0;
	
}

