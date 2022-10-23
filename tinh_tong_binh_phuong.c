#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int i, s=0;
	for(i=1; i<=n; i++){
		s = s + pow(i,2);
	}
	printf("%d", s);
	return 0;
}
