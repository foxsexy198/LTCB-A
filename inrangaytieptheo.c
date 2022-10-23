#include<stdio.h>
int main(){
	int dd, mm, yy;
	scanf("%d%d%d", &dd, &mm, &yy);
	if(dd<29){
		printf("%02d/%02d/%04d", dd + 1, mm, yy);
}
	else if(dd>=29 && dd<=31){
		if(mm==12)
			printf("01/01/%04d", yy+1);
		else 
			printf("01/%02d/%04d", mm+1, yy);
	}
	return 0;
}
