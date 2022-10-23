#include<stdio.h>

int mystrlen( char s[]){
	int i=0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}


char lcase(char s){
	if(s>=65 && s<=90)
		s += 32;
	return s;
}

char ucase(char s){
	if(s>=97 && s<=122)
		s-=32;
	return s;
}

void hoa(char a[]){
	a[0] = ucase(a[0]);
	int i=1;
	while(a[i] != '\0'){
		if(a[i-1] == ' ')
			a[i] = ucase(a[i]);
		else
			a[i] = lcase(a[i]);
		i++;
	}
}

int main(){
	char s[500];
	fgets(s, 500, stdin);
	int len = mystrlen(s);
	if(s[len-1] == '\n'){
		len--;
		s[len] = '\0';
	}
	printf("%s\n", s);
	hoa(s);
	printf("%s", s);
	return 0;
}
