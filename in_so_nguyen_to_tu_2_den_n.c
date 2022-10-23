#include<stdio.h>
#include<math.h>
int main(){
	int m, N, ngto=1, c;
	scanf("%d", &m);
	for(N=2; N<=m; N++){
		if(N==1)
			ngto=0;
		for(c=2; c<=sqrt(N); c++){
			if(N%c==0)
				ngto=0;
		}
		if(ngto)
			printf("%d", N);
	}
	return 0;
}
