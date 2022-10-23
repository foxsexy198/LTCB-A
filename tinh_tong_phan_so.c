#include<stdio.h>
int main(){
	int n;
	float i, s=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		s=s+(i/(i+1));
	}
	printf("%.2f", s);
	return 0;
}
