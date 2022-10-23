#include<stdio.h>
void day(int d, int m, int y){
	printf("%02d/%02d/%d", d, m, y);
}
int main(){
	int d, m, y;
	scanf("%d%d%d", &d, &m, &y);
	day(d, m, y);
	return 0;
}
