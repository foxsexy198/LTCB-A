#include<stdio.h>
#include<string.h>
int main(){
	char mailan[50], ch;
	int i=0;
	while(ch != '\n'){			//while(ch != '\n'){
		ch = getchar();			//	ch = getchar();
		if(ch != '\n'){			// mailan[i] = ch;
			mailan[i] = ch;		// i++;
			i++;				//}
		}
	}
	mailan[i] = '\0';			// mailan[i-1] = '\0';
	for(i=0; i<strlen(mailan); i++)
		printf("%c", *(mailan+i));
	return 0;
}
