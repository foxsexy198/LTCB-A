#include<stdio.h>
int main(){
	double a, b;
	char oper;
	scanf("%lf%c%lf", &a, &oper, &b);
	switch(oper){
		case'+':
			printf("%.2lf + %.2lf = %.2lf\n", a, b, a+b);
			break;
		case'-':
			printf("%.2lf - %.2lf = %.2lf\n", a, b, a-b);
			break;
		case'*':
			printf("%.2lf * %.2lf = %.2lf\n", a, b, a*b);
			break;
		case'/':
			printf("%.2lf / %.2lf = %.2lf\n", a, b, a/b);
			break;
		default:
			printf("Errors");		
	} 
	return 0;
}
