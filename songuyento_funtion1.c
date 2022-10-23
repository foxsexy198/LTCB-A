#include<math.h>
int isPrime(int n){
	int i, flag=1;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0){
			flag=0;
		}
	}
	if(flag==0 || n<=1){
		return 0;
	}
	else
		return 1;
}
int main(){
	int i;
	for (i = 2; i <= 50; i++){
	    if (isPrime(i))
	        printf("%d ", i);
	    }
	return 0;
}
