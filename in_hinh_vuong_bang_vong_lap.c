#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	printf("##########\n");
	int i;
	for(i=1; i<=(n-2); i++){
		printf("#        #\n");
	}
	printf("##########");
	return 0;	
}
