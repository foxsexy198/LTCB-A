#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i, sum;
	for(i=1; i<=n; i++){
		sum=(n*(n+1))/2;
		printf("%d", sum);
		break;
	}
	return 0;
}
