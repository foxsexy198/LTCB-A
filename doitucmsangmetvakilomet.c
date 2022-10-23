#include<stdio.h>
int main(){
	float n;
	scanf("%f", &n);
	float m = n/100;
	float km = n/100000;
	printf("%0.0fcm = %.3fm = %.3fkm", n, m, km);
	return 0;
	
}
