#include<stdio.h>
#include<string.h>
int countVowels(char s[]){
	int i, count=0;
	for(i=0; i<strlen(s); i++){
		if(s[i] == 65 || s[i] == 69 || s[i] == 73 || s[i] == 79 || s[i] == 85 || s[i] == 65+32 || s[i] == 69+32 || s[i] == 73+32 || s[i] == 79+32 || s[i] == 85+32){
			count++;
		}
	}
	return count;
}
int main(){
	char str[500];
fgets(str,500,stdin);
printf("%s%d",str,countVowels(str));
	return 0;
}
