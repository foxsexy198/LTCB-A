#include<stdio.h>
#include<math.h>
int main(){
	float r1,r2,r3,r;
	scanf("%f%f%f", &r1, &r2, &r3);
	r = (r1+((r2*r3)/(r2+r3)));
	printf("%.2f", r);
	return 0;
}
