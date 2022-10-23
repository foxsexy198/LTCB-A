#include<stdio.h>
#include<string.h>
int main(){
	char *str = "abcd"; 		// con tro chuoi thi nen xai khai bao nhu nay
	int soluong = strlen(str);
	printf("%d\n", soluong);
	int i;
	for(i=0; i<strlen(str); i++)
		printf("%c", *(str+i));
	return 0;
}
