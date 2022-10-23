#include<stdio.h>
#include<math.h>
int main(){
	float a, b;
	scanf("%f%f", &a, &b);
	if(a==0){
		if(b==0)
			printf("VO SO NGHIEM");
		else
			printf("VO NGHIEM");
	}
	float x = -b/a;
	if(a!=0)
		printf("x = %0.1f", x);
	return 0;
}
