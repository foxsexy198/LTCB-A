#include <stdio.h>
int isPrime(int n) {
	int check = 1, i;
	if (n<2) 
		return check = 0;
	for (i=2; i<n; i++){
		if (n%i == 0)
			return check = 0;
		}
	return check;
}
int countPrimeNumbers(int start, int end) {
	int count = 0, i;
	for (i = start; i<=end; i++) {
		if (isPrime(i)==1) 
			count++;
	}
	return count;
}
int main() {
	int x,y;
	scanf("%d %d", &x,&y);
	printf ("%d",countPrimeNumbers(x,y));
	
return 0;
}
