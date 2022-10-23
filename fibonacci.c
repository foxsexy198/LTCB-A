#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int f1=0, f2=1, i;
	int temp=f1+f2;
	printf("%d, %d", f1, f2);
	for(i=3; i<=n; i++){
		printf(", %d", temp);
		f1=f2;
		f2=temp;
		temp=f1+f2;
	}
	
	return 0;
}
