#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int k=0;
	while(pow(2, k)<n){
		k++;
	}
	printf("%d", k);
	return 0;	
}
