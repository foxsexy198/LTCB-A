#include<stdio.h>
int main(){
	int i, c, n;
	for(i=1; i<=10; i++){
		printf(" 1 x %2d = %2d    2 x %2d = %2d    3 x %2d = %2d\n", i, 1*i, i, 2*i, i, 3*i);
	}
		printf("\n");
	for(c=1; c<=10; c++){
		printf(" 4 x %2d = %2d    5 x %2d = %2d    6 x %2d = %2d\n", c, 4*c, c, 5*c, c, 6*c);
	}
		printf("\n");
	for(n=1; n<=10; n++)
		printf(" 7 x %2d = %2d    8 x %2d = %2d    9 x %2d = %2d\n", n, 7*n, n, 8*n, n, 9*n);
	return 0;
}
