#include<stdio.h>
int main(){
	char x;
	scanf("%c", &x);
	if(x=='a' || x=='A' || x=='o' || x=='O' || x=='e' || x=='E' || x=='u' || x=='U' || x=='i' || x=='I')
		printf("%c is a vowel.", x);
	else
		printf("%c is a consonant.", x);
	return 0;	
}
