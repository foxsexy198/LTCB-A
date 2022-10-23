#include<stdio.h>
int main(){
	int n;
	scanf("%d", n);
	int i=2, dem=0;
	while(n>1){
		if(n%i==0){
			dem++;
			if(n==i){
				printf("%d %d", i, dem);
			}
			n/=i;
		}
		else{
			if(dem>0){
				printf("%d %d", i, dem);
				dem=0;
			}
			i++;
		}
	}
	return 0;
}
