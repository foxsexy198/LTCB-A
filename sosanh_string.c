#include<stdio.h>
#include<string.h>

void remove_fgets(char s[]){
	int len = strlen(s);
	if(s[len-1] == '\n'){
		len--;
		s[len] = '\0';
	}
}

void compare(char m[], char r[]){
	if(strcmp(m, r) == 0)
		printf("1 = 2");
	else if(strcmp(m, r) > 0)
		printf("1 > 2");
	else
		printf("1 < 2");
}

int main(){
	char a[100], b[100];
	fgets(a, 100, stdin);
	fgets(b, 100, stdin);
	remove_fgets(a);
	remove_fgets(b);
	compare(a, b);
	return 0;
}
