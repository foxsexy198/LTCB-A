#include<stdio.h>
#include<math.h>
int main(){
	float R1, R2, R3;
	scanf("%f%f%f", &R1, &R2, &R3);
	if ((R1,R2,R3)>=0 && (R1,R2,R3)<=100){
	printf("%0.2f", ((R2*R3)/(R2+R3))+R1);
	}
	return 0;
}
