#include<stdio.h>
void VDV(float ng1, float ng2, float ng3){
	float min = ng1;
	int vt_min = 1;
	if(ng2<min){
		min = ng2;
		vt_min = 2; 
	}
	if(ng3<min){
		min = ng3;
		vt_min = 3;
	}
	float max = ng1;
	int vt_max = 1;
	if(ng2>max){
		max = ng2;
		vt_max = 2;
	}
	if(ng3>max){
		max = ng3;
		vt_max = 3;
	}
	printf("Thanh tich tot nhat: %.1f giay\n", min);
	printf("Thanh tich thap nhat: %.1f giay\n", max);
	printf("VDV thi dau quoc gia: %d\n", vt_min);
	printf("VDV xuong voi doi tre: %d", vt_max);
}
int main(){
	float ng1,ng2,ng3;
	scanf("%f%f%f", &ng1, &ng2, &ng3);
	VDV(ng1, ng2, ng3);
	
	return 0;
}
