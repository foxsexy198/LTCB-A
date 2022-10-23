#include<stdio.h>
int main(){
 int i, n;
 long long int fact = 1;
 scanf("%d", &n);
 for (i = 1; i <= n; i++)
	fact = fact * i;
	printf("%d! = %lld", n, fact);
 return 0;
}
