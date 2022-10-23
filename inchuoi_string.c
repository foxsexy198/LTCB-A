#include<stdio.h>
#include<string.h>
int main(){
	char str[] = {'a', 'b', 'c', 'd', '\0'};//kichs thuoc mang bang 5
	char str1[] = "abcd";//so luong ky tu trong chuoi bang 4
	int soluong = strlen(str1);//strlen la so luong ky tu cua chuoi
	printf("%d\n", soluong);
	int i;
	for(i=0; i<strlen(str1); i++)
		printf("%c", str[i]);
	return 0;
}
