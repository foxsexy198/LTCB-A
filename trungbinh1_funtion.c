#include<stdio.h>
void ten(char t){
	printf("%c\n", t);
}
float trungbinh(float lt, float th1, float th2, float th3, float th4){
	return (lt+th1+th2+th3+th4)/5;
}
int main(){
	char t;
	float lt, th1, th2, th3, th4;
	scanf("%c\n%f%f%f%f%f", &t, &lt, &th1, &th2, &th3, &th4);
	ten(t);
	printf("Ly thuyet: %.2f\n", lt);
	printf("Thuc hanh 1: %.2f\n", th1);
	printf("Thuc hanh 2: %.2f\n", th2);
	printf("Thuc hanh 3: %.2f\n", th3);
	printf("Thuc hanh 4: %.2f\n", th4);
	printf("Trung binh: %.2f", trungbinh(lt, th1, th2, th3, th4));
	return 0;
}
