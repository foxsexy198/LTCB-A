#include<stdio.h>
#include<math.h>
int main(){
	int m;
	scanf("%d", &m);
	int n;
	for(n=2; n<=m; n++){
		int i, flag=1;
		if(n==1)
			flag=0;
		for(i=2; i<=sqrt(n); i++){
			if(n%i==0)
				flag=0;
		}
		if(flag)
			printf("%d ", n);	
	}
	return 0;
}
