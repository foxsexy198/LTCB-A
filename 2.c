#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i, j; 
	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			if(j%2==1)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
	return 0;
}
