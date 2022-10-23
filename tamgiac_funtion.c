#include<stdio.h>
#include<math.h>
float chuvi(float a, float b, float c){
	return a+b+c;
}
float dientich(float a, float b, float c){
	float p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(){
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	printf("Chu vi: %.2f\n", chuvi(a, b, c));
	printf("Dien tich: %.2f", dientich(a, b, c));
	return 0;
}
