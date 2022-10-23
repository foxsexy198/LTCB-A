#include<stdio.h>
#include<math.h>
int main(){
	int ndC;
	scanf("%d", &ndC);
	float ndF = (1.8*ndC)+32;
	printf("%d do C = %.1f do F", ndC, ndF);
	return 0;
}
