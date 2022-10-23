#include<stdio.h>
#include<string.h>

void printstr(char mailan[]){
	printf("Ten em: ");
	puts(mailan);
}

int main(){
	char name[50], ch;
	int i=0;
	fgets(name, 50, stdin);
	name[strlen(name) - 1] = '\0';
	printstr(name);
	return 0;
}
