#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int i, ngto=1;
	if(n>1 && n==(int)n){
		for(i=2; i<=sqrt(n); i++){
			if((int)n%i==0){
				ngto=0;
			break;
			}
		}
		if(ngto==1)
			printf("%d is a prime number.", n);
		else
			printf("%d is not a prime number.", n);
	}
	else
		printf("%d is not a prime number.", n);
	return 0;
}
