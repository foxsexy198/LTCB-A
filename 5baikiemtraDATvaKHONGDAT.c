#include<stdio.h>
int main(){
	float lt, th1, th2, th3, th4;
	scanf("%f%f%f%f%f", &lt, &th1, &th2, &th3, &th4);
	float tb = (lt+th1+th2+th3+th4)/5;
	if(tb>=4)
		printf("DAT");
	else
		printf("KHONG DAT");
	return 0;
}
