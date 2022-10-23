#include<stdio.h>
void tuoi1(int d, int m, int y, int ht){
	printf("Ban sinh ngay %02d thang %02d nam %d. Nam nay, ban %d tuoi.", d, m, y, ht-y );
}
int main(){
	int d, m, y, ht;
	scanf("%d%d%d%d", &d, &m, &y, &ht);
	tuoi1(d, m, y, ht);
	return 0;
}
