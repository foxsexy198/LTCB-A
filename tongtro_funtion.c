#include<stdio.h>
float tong(int r1, int r2, int r3){
	return ((r2*r3*1.0)/(r2+r3))+r1;
}
int main(){
	int r1, r2, r3;
	scanf("%d%d%d", &r1, &r2, &r3);
	printf("%.2f", tong(r1, r2, r3));
	return 0;
}
