#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i, ngto=0;
	if(n>1){
		for(i=2; i<=(n-1); i++){
			if((int)n%i==0){
				ngto=1;
			break;
			}
		}
		if(ngto==1)
			printf("%d la hop so.", n);
		else
			printf("%d khong phai la hop so.", n);
	}
	else
		printf("%d khong phai la hop so.", n);
	return 0;
}
