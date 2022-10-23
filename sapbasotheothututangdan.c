#include <stdio.h>
int main() {
	int max,a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b) {
		max=a;
		a=b;
	}
	else 
		max=b;
	if (max>c) {
		if(c>a)
			printf("%d %d %d",a,c,max);
		else 
			printf("%d %d %d",c,a,max);
	}
	else
		printf("%d %d %d",a,max,c);
	
return 0;	
}
