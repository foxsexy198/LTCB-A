#include<stdio.h>
int main(){
	double s;
	scanf("%lf", &s);
	float tong=0;
	float n=0;
	while(tong<=s){
		tong=tong+1/(n+1);
		n++;
	}
	printf("%.0f", n);
	return 0;
}
