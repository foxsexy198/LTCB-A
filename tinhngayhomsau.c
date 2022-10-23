#include<stdio.h>
int main(){
	int D,th, nam, songay, flag;
	scanf("%d%d%d", &D, &th, &nam);
	if(nam%4==0)
		if(nam%100==0)
			if(nam%400==0)
				flag=1;
			else
				flag=0;
		else
			flag=1;
	else
		flag=0;
	if(th==1 || th== 3 || th==5 || th==7 || th==8 || th==10 || th==12)
		songay=31;
	else if(th==4 || th==6 || th==9 || th==11)
		songay=30;
	else 
		if(flag==1)
			songay=29;
		else
			songay=28;
	if(D<songay)
		D++;
	else{
		D=1;
		if(th<12)
			th++;
		else{
			th=1;
			nam++;
		}
	}
	printf("%02d/%02d/%d", D, th, nam);
	return 0;
}
