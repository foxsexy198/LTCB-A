#include<stdio.h>
int main(){
	int i, c;
	for(c=1; c<=9; c++){
			printf("%d Times Table\n====================\n", c);
		for(i=1; i<=10;i++)
			printf("%d x %d = %d\n", c, i, c*i);
		printf("\n");
	}
	return 0;
}
