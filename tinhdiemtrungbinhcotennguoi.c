#include<stdio.h>
int main(){
	char tennguoi;
	float lt, th1, th2, th3, th4;
	scanf("%c", &tennguoi);
	scanf("%f%f%f%f%f", &lt, &th1, &th2, &th3, &th4 );
	float diemtb = (lt+th1+th2+th3+th4)/5;
	printf ("%c\n", tennguoi);
	printf("Ly thuyet: %0.2f\n", lt);
	printf("Thuc hanh 1: %0.2f\n", th1);
	printf("Thuc hanh 2: %0.2f\n", th2);
	printf("Thuc hanh 3: %0.2f\n", th3);
	printf("Thuc hanh 4: %0.2f\n", th4);
	printf("Trung binh: %0.2f\n", diemtb);
	return 0;
	
}
