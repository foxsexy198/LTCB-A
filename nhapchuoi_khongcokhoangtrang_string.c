#include<stdio.h>
#include<string.h>
int main(){
	char mailan[50];
	scanf("%c", &mailan);		// nhap mang truc tiep, neu chuoi co khoang trang thì kh xai nhu nay
	int i;
	for(i=0; i<strlen(mailan); i++)
		printf("%c", mailan[i]);
	return 0;
}
