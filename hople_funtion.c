#include<stdio.h>
void hople(int d, int m, int y){
	int ngay, flag;
	if((y%4==0 && y%100==0 && y%400==0) || (y%4==0 && y%100!=0)){
		flag = 1;
	}
	else{
		flag = 0;
	}
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
		ngay=31;
	}
	else if(m==2){
		if(flag==1)
			ngay=29;
		else
			ngay=28;
	}
	else{
		ngay=30;
	}
	if(y>=1 && (m>=1 && m<=12) && (d>=1 && d<=ngay)){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
int main(){
	int d, m, y;
	scanf("%d%d%d", &d, &m, &y);
	hople(d,m,y);
	return 0;
}
