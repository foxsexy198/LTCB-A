#include<stdio.h>
void getFibo(int A[], int n){
	int i, s=0;
	for(i=0; i<n; i++){
		if(i==0 || i==1)
			printf("1 ");
		else{
			s = i-2 + (i-1);
			printf("%d ",s);
		}
	}
} 
int main(){
	int A[50];
int i,n;
n=10;
getFibo(A,n);
for(i=0;i<=n;i++)
    printf("%d ",A[i]);
	return 0;
	
}
