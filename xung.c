#include<stdio.h>
#include<string.h>
int palidrome(char s[]){
	int i;
	for(i=0; i<strlen(s)/2; i++){
		if(s[i] != s[strlen(s)-1-i])
			return 0;
	}
	return 1;
}
int main(){
	char a[500];
	fgets(a, 500, stdin);
	int len = strlen(a);
	if(a[len-1] == '\n'){
		len--;
		a[len] = '\0';
	}
	printf("%s\n", a);
	if (palidrome(a))
		printf("YES");
	else
		printf("NO");
	return 0;
	
}
