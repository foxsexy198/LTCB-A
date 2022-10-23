#include<stdio.h>
int main(){
	char ten;
	float lt, th1, th2, th3, th4;
	scanf("%c", &ten);
	scanf("%f%f%f%f%f", &lt, &th1, &th2, &th3, &th4);
	float diemtb = (lt+(th1+th2+th3+th4)/4)/2;
	printf("%c\n", ten);
	printf("Ly thuyet: %0.2f\n", lt);
	printf("Thuc hanh 1: %0.2f\n", th1);
	printf("Thuc hanh 2: %0.2f\n", th2);
	printf("Thuc hanh 3: %0.2f\n", th3);
	printf("Thuc hanh 4: %0.2f\n", th4);
	printf("Trung binh: %0.2f", diemtb);
	return 0;
}
