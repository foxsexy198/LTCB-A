#include<stdio.h>
int main(){
	int cu, moi, tien;
	scanf("%d%d", &cu, &moi);
	int kwh = moi-cu;
	if(kwh>=0 && kwh<=50){
		tien = kwh*1549;}
	else if(kwh<=100){
		tien = 50*1549 + ((kwh-50)*1600);}
	else if(kwh<=200){
		tien = (50*1549) + (50*1600) + ((kwh-100)*1858);}
	else if(kwh<=300){
		tien = (50*1549) + (50*1600)+ (100*1858)+ (kwh-200)*2340;}
	else if(kwh<=400){
		tien = (50*1549)+ (50*1600) + (100*1858)+ (100*2340) + ((kwh-300)*2615);}
	else if(kwh>400){
		tien = (50*1549) + (50*1600)+ (100*1858)+ (100*2340) + (100*2615) + ((kwh-400)*2701);}
	printf("%d Kwh: %d VND", kwh, tien);
return 0;	
}
