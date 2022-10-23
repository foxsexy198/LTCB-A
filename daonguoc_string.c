#include<stdio.h>

void swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(char s[]){
	int l = 0, r = strlen(s)-1;
	while (l < r)
	{
		swap(&s[l], &s[r]);
		l++;
		r--;
	}
}

int main(){
	char str[6];
	int len;
	fgets(str,6,stdin);
	Remove '\n' in fgets
	len = strlen(str);
	if (str[len-1]=='\n') 
	{
	    len--;
	    str[len]='\0';
	}
	reverse(str);
	puts(str);
	
	return 0;
}
