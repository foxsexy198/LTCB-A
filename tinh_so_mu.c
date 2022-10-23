#include<stdio.h>
int main(){
	int n, i;
	float x, tich=1;
	scanf("%f%d", &x, &n);
	for(i=1; i<=n; i++){
		tich=tich*x;	
	}
	printf("%.2f\n", tich);
	return 0;
}
