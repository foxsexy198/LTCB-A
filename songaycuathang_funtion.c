#include<stdio.h>
void songay(int m, int y){
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
		printf("Thang %d nam %d co 31 ngay.", m, y);
	}
	else if(m==2){
		if((y%4==0 && y%100==0 && y%400==0) || (y%4==0 && y%100!=0))
			printf("Thang 2 nam %d co 29 ngay.", y);
		else
			printf("Thang 2 nam %d co 28 ngay.", y);
	}
	else
		printf("Thang %d nam %d co 30 ngay.", m, y);
}
int main(){
	int m, y;
	scanf("%d%d", &m, &y);
	songay(m, y);
	return 0;
}
