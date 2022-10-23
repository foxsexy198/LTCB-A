#include<stdio.h>
int main(){
	float km;
	scanf("%f", &km);
	float tien;
	if(km>=0 && km<=0.5)
		tien = km*(11500/5);
	else if(km>0.5 && km<=30)
		tien = 0.5*11500 + (km-0.5)*14500;
	else
		tien = 0.5*11500 + 29.5*14500 +(km-30)*11600;
	printf("%.2f km = %.2f VND", km, tien);
	return 0;
}
