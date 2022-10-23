#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	printf("0\n");
	int i;
	for(i=1; i<=n; i++){
		if(i%2==0)
			printf("%d\n", i);
		else;
	}
	return 0;	
}
