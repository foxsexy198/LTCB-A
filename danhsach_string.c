#include <stdio.h>
#include <string.h>
void remove_fgets(char a[]){
	int len = strlen(a);
	if(a[len -1] == '\n'){
		len--;
		a[len] = '\0';
	}
}

int main(){
	int n;
	char list[40][50];
	scanf("%d", &n);
	getchar();
	int i;
	for(i=1; i<=n; i++){
		fgets(list[i], 50, stdin);
		remove_fgets(list[i]);
	}
	
	for(i=1; i<=n; i++){
		printf("%d. %s\n", i, list[i]);
	}
	
	return 0;
}
