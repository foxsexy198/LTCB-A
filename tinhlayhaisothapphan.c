#include<stdio.h>
int number(){
	float number;
	printf("Please, enter real number:");
	scanf("%f", &number);
	printf("Value of number: %0.2f",number);
	return 0;
}
