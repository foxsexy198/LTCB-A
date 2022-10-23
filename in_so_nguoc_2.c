#include<stdio.h>
int main(){
	int n, dem=0;
	scanf("%d", &n);
	while(n!=0){
		n=n/10;
		dem=dem+1;
	}
	printf("%d", dem);
	return 0;
}
