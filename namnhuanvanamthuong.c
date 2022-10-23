#include<stdio.h>
int main(){
	int n, flag;
	scanf("%d", &n);
	if(n%4==0)
		if(n%100==0)
			if(n%400==0)
				flag=1;
			else
				flag=0;
		else
			flag=1;
	else
		flag=0;
	if(flag==1)
		printf("Nam %d la nam nhuan.", n);
	else
		printf("Nam %d la nam thuong.",n);
	return 0;
}
