#include<stdio.h>
void readList(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		scanf("%d", (a+i));
}
void printList(int *a, int n){
	int i;
	for(i=0; i<n; i++)
		printf("%d ", *(a+i));
	printf("\n");
}
int main(){
	int n;
	int a[1000];
	scanf("%d",&n); // So phan tu
	readList(a,n);	 //Nhap mang
	printf("Print list: ");
	printList(a,n);
	printf("Print again: ");
	printList(a,n);
	return 0;
}
