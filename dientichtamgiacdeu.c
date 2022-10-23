#include<stdio.h>
#include<math.h>
int main(){
	int c;
	scanf("%d", &c);
	float dt = (c*((c*sqrt(3)))/2)/2;
	printf("Area of equilateral triangle = %.2f.", dt);
	return 0;
}
