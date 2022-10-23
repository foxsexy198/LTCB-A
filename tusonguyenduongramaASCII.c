#include<stdio.h>
#include<stdlib.h>
int main(){
	int x;
	char l[33];
	scanf("%d", &x);
	if(x>0 && x<255){
	itoa(x,l,10);
	printf("Ky tu co ma ASCII %d la: '%i'.",x,l);
	}
	return 0;
	
	
}
