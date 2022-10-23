#include<stdio.h>
#include<time.h>
int main(){
	unsigned int ngay, thang, namsinh;
	scanf("%u%u%u", &ngay, &thang, &namsinh);
	struct tm ts;
	time_t now;
	unsigned int year;
	now = time(0);
	ts = *localtime(&now);
	year = ts.tm_year + 1900;
	unsigned int tuoi = year-namsinh;
	printf("Ban sinh ngay %02u thang %02u nam %04u. Nam nay, ban %02u tuoi.", ngay, thang, namsinh, tuoi);
	
	return 0;
}
