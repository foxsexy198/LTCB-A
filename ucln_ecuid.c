#include<stdio.h>
int main(){
	int a, b, r;
	scanf("%d%d", &a, &b);
	if(a<0)
		a=-a;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	printf("%d", a);
	return 0;	
}
