#include<stdio.h>
int main(){
	int ngay, th;
	scanf("%d", &th);
	switch(th){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			ngay = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			ngay = 30;
			break;
		case 2:
			ngay = 28;
			break;
		default:
			printf("Errors");
	}
	printf("thang %d co %d ngay", th, ngay);
	return 0;
}
