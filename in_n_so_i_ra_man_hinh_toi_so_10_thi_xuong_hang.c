#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		printf("%d ", i);
		if(i%10==0)
			printf("\n");
		else;
	}
	return 0;
}
