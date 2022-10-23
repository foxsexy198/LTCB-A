#include<stdio.h>
int main(){
	int n, i, c, b;
	scanf("%d", &n);
	printf("*\n**\n");
	if(n>0 && n==4){
		printf("*_*\n");
	}
	else{
		for(c=1; c<=(n-4); c++){
			printf("*\n");
		}
			printf("*\n");
	}
	for(i=1; i<=n; i++){
		printf("*");
	}
	return 0;
}
