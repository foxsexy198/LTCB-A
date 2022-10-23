#include<stdio.h>
#include<math.h>
int main(){
	int ndF;
	scanf("%d", &ndF);
	float ndC = (ndF-32)/1.8;
	printf("%d do F = %.2f do C", ndF, ndC);
	return 0;
} 
