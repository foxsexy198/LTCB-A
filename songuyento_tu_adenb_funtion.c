#include<stdio.h>
#include<math.h>
int main(){
	int a, b, flag=1, i, j;
	scanf("%d%d", &a, &b);
	for(i=a; i<b; i++){
		for(j=2; j<=sqrt(i); j++){
			if(i%j==0)
				flag=0;
			else
				flag=1;
		}
		if(flag)
			printf("%d ", i);
	}
	return 0;
}
