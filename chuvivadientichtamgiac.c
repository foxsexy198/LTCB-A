#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	float p = (a+b+c)/2;
	printf("Chu vi: %0.2f\n",(a+b+c));
	printf("Dien tich: %0.2f", (sqrt(p*(p-a)*(p-b)*(p-c))));
	return 0;

}
