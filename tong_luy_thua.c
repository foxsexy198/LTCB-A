#include<stdio.h>
#include<math.h>
int main(){
	int n, i, r, s=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		r=pow(i,2);
		s=s+r;
	}
	printf("%d", s);
	return 0;
}
