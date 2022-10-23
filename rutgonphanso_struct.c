#include <stdio.h>
struct PhanSo{
	int Tu;
	int Mau;
};
void inPhanSo(struct PhanSo a){
	printf("%d/%d\n", a.Tu, a.Mau);
}
int ucln(int a, int b){
	while(b != 0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
void chuanhoa(struct PhanSo *pa){
	int d = ucln(pa->Tu, pa->Mau);
	pa->Tu /= d;
	pa->Mau /= d;
}
int main(){
	struct PhanSo a = {10, 15};
	inPhanSo(a);
	chuanhoa(&a);
	inPhanSo(a);
	return 0;
}
