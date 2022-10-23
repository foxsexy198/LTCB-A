#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n>0)
		printf("You entered a positive number.");
	else if(n==0)
		printf("You entered 0.");
	else
		printf("You entered a negative number.");
	return 0;
}
