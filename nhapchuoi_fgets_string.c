#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[50], th;
	int i=0;		
	fgets(chuoi, 50, stdin);
	printf("%d\n", strlen(chuoi)); //so luong chuoi ban dau
	chuoi[strlen(chuoi) - 1] = '\0';		// bo dau xuong dong
	printf("%d\n", strlen(chuoi));		// so luong sau
	printf("%s", chuoi);
	return 0;
}
