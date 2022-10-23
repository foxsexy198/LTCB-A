#include<stdio.h>
int main(){
	int n, sum=0, r;
	scanf("%d", &n);
	while(n!=1){
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(sum==n)
		printf("1");
	else
		printf("0");
	return 0;	
}
