#include<stdio.h>
float chuvi(float d){
	float pi=3.14;
	return d*pi;
}
float dientich(float d){
	float pi=3.14;
	return (d/2)*(d/2)*pi;
}
int main(){
	float d;
	scanf("%f", &d);
	printf("Chu vi: %.2f\n", chuvi(d));
	printf("Dien tich: %.2f", dientich(d));
	return 0;
}
