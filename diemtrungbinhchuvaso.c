#include<stdio.h>
int main(){
	float lt, th1, th2, th3, th4;
	scanf("%f%f%f%f%f", &lt, &th1, &th2, &th3, &th4);
	float diemtb = (lt+th1+th2+th3+th4)/5;
	if(diemtb>=9){
		printf("Diem so: %.1f\n", diemtb);
		printf("Diem chu: A");
	}
	else if(diemtb>=8 && diemtb<9){
		printf("Diem so: %.1f\n", diemtb);
		printf("Diem chu: B+");
	}
	else if(diemtb>=7 && diemtb<8){
		printf("Diem so: %.1f\n", diemtb);
		printf("Diem chu: B");
	}
	else if(diemtb>=6 && diemtb<7){
		printf("Diem so: %.1f\n", diemtb);
		printf("Diem chu: C+");
	}
	else if(diemtb>=5 && diemtb<6){
		printf("Diem so: %.1f\n", diemtb);
		printf("Diem chu: C");
	}
	else if(diemtb>=4.5 && diemtb<5){
		printf("Diem so: %.1f\n", diemtb);
		printf("Diem chu: D+");
	}
	else if(diemtb>=4 && diemtb<4.5){
		printf("Diem so: %.1f\n", diemtb);
		printf("Diem chu: D");
	}
	else{
		printf("Diem so: %.1f\n", diemtb);
		printf("Diem chu: F");
	}
	return 0;
		
}
