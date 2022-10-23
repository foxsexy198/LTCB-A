#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int j, i, k, z;
	printf("*\n**\n");
	if(n>2){
		if(n>=4){
		
			for(i=1; i<=n-3; i++){
				printf("*");
				for(j=1; j<=i; j++){
					printf("-");
				}
				for(k=0; k<i-(i-1); k++){
					printf("*");
				}
				printf("\n");
			}		
		}
		for(z=1; z<=n;  z++){
			printf("*");
		}
	}
	return 0;
}
