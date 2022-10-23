#include<stdio.h>
int main(){
	int m, n, i, c;
	scanf("%d%d", &m, &n);
	
	int A[m][n];
	for(i=0; i<m; i++){
		for(c=0; c<n; c++){
			scanf("%d ", &A[m][n]);
		}
	}
	for(i=0; i<m; i++){
		for(c=0; c<n; c++){
			printf("%d ", A[m][n]);
		}
	}
	printf("\n");
	int x;
	scanf("%d", &x);
	for(i=0; i<m; i++){
		for(c=0; c<n; c++){
			if(A[m][n] == x)
				printf("(%d, %d)", m, n);
		}
	}
	
	int count=0;
	for(i=0; i<m; i++){
		for(c=0; c<n; c++){
			if(A[m][n] == x)
				count++;
		}
	}
	printf("%d", count);
	return 0;
}
