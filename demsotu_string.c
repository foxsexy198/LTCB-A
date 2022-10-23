#include<stdio.h>
#include<string.h>
int main(){
	char s[500];
	fgets(s, 500, stdin);
	int len = strlen(s);
	if(s[len-1] == '\n'){
		len--;
		s[len] = '\0';
	}
	int i = 1, count=1;
	while(s[i] != '\0'){
		if(s[i] != ' ' && s[i-1] == ' ')
		count++;
		i++;
	}
	printf("%d", count);
	return 0;
}
