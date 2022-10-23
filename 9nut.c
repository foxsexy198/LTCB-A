#include<stdio.h>
int main(){
	int a,b,c,d, s;
	for(a=0; a<=9; a++){
		for(b=0; b<=9; b++){
			for(c=0; c<=9; c++){
				for(d=0; d<=9; d++){
					s=(a+b+c+d);
					int r=s;
					if(r%10==9)
						printf("%d%d%d%d\n", a, b, c, d);
				}
			}
		}
	}
	
	return 0;
}
