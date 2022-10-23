#include<stdio.h>
#include<time.h>
void tuoi1(int d, int m, int y, int year;){
	struct tm ts;
	int year;
    time_t now;
    now = time(0);            
    ts = *localtime(&now);    
    year = ts.tm_year + 1900;
    int tuoi=year-y;
	printf("Ban sinh ngay %02d thang %02d nam %d. Nam nay, ban %d tuoi.", d, m, y, tuoi);

}
int main(){
	int d, m, y, ht;
	scanf("%d%d%d", &d, &m, &y);
	tuoi1(d, m, y, year);

	return 0;
}
