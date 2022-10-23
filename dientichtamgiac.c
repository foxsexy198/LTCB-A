#include<stdio.h>
int main(){
	int b,h;
	scanf("%d%d", &b, &h);
	float dt = (b*h)/2;
	printf("Dien tich tam giac: %.2f", dt);
	return 0;
}
