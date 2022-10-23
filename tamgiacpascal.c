#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i, j, k, z;
	if(n==1){
		printf("1\n1 1");
	}
	else{
//		printf("1\n");
//		printf("1 1");
		for(i=0; i<=n; i++){
			for(j=0; j<i; j++){
				int igt=1;
				for(k=1; k<=i; k++){
					igt=igt*k;
				}
				int ijgt=1;
				for(k=1; k<=i-j; k++){
					ijgt=ijgt*k;
				}
				int jgt=1;
				for(k=1; k<=j; k++){
					jgt=jgt*k;
				}
				int tohop=igt/(ijgt*jgt);
				printf("%d ", tohop);
			}
			for(z=1; z<=i-(i-1); z++)
			printf("1\n");
		}
	}
	return 0;
}
