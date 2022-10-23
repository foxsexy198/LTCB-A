#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c,delta;
	scanf("%d%d%d", &a, &b, &c);
	delta = b*b-4*a*c;
	if(delta<0)
			printf("No real roots");
	else if(delta==0){
		float x = -b/(2*a);
			printf("x = %.2f", x);
	}
	else{		
		float x1 = (-b-sqrt(delta))/(2*a);
		float x2 = (-b+sqrt(delta))/(2*a);
			printf("x1 = %.2f\n", x1);
			printf("x2 = %.2f", x2);
	}
	return 0;
}
