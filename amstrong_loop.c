#include<stdio.h>
#include<math.h>
void amstrong(){
	int i, j, k, s = 0;
	for(i = 1; i < 10; i++){
		for(j = 0;j < 10; j++){
			for(k = 0; k < 10; k++){
				s = pow(i, 3) + pow(j, 3) + pow(k, 3);
				if(s == (100 * i + 10 * j + k))
					printf("%d ", s);
			}
		}
	}
}
int main(){
	amstrong();
	return 0;
}

