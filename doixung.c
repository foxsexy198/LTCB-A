#include <stdio.h>
#include <string.h>


void palidrome(char s[]){
	int i, gt=1;
	int len = strlen(s);
	if(s[len-1] == '\n'){
		len--;
		s[len] = '\0';
	}
	for(i = 0; i < len-1; i++){
		if(s[i] != s[len-1-i])
			gt = 0;
	}
	if(gt)
		printf("YES");
	else
		printf("NO");
}
int main(){
	char a[500];
	fgets(a,500,stdin);
	int len = strlen(a);
	printf("%s", a);
	
	palidrome(a);
	return 0;
	
	
	
}
