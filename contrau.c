#include<stdio.h>
void contrau(){
	int i, j;
	int c;
	for(i = 0; i < 101; i++){
		for(j = 0; j <= 100 - i; j++){
			c = 100 - (i + j);
			if(5 * i + 3 * j + c / 5 == 100 && c % 5 == 0)
				printf("%d %d %d\n", i, j, c);
		}
	}
}

int main(){
//	int i, j, s = 0;
//	int c;
//	for(i = 0; i <= 100; i++){
//		for(j = 0; j <= 100 - i; j++){
//			c = 100 - i - j;
//			s = 5 * i + 3 * j + c / 5;
//			if(s == 100 && c % 5 == 0)
//				printf("%d %d %d\n", i, j, c);
//		}
//	}
	contrau();
	return 0;
}
