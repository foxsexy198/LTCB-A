#include<stdio.h>
int main (){
	int ngay;
	scanf("%d", &ngay);
	int sonam = ngay/365;
	int sotuan = (ngay%365)/7;
	int songay = (ngay%365)%7;
	printf("%d days = %d year(s) %d week(s) and %d day(s)", ngay, sonam, sotuan, songay);
	return 0;

}
