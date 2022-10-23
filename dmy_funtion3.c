#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int i, flag=1;
	if(n==1)
		flag =0;
	else{
		for(i=2; i<=sqrt(n); i++){
			if(n%i==0){
				flag=0;
			}
		}
	if(flag)
		printf("1");
	return 0;
}
