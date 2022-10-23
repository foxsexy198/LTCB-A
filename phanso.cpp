#include <stdio.h>

struct PhanSo{
	int Tu;
	int Mau;
};
struct PhanSo nhapPhanSo(){
	struct PhanSo a;
	scanf("%d%d", &a.Tu, &a.Mau);
	return a;
}
void inPhanSo(struct PhanSo a){
	printf("%d/%d", a.Tu, a.Mau);
}

int main(){

   	struct PhanSo a;

   	a = nhapPhanSo(); // G?i hàm nh?p 1 phân s?

   	inPhanSo(a); // Hi?n th? phân s?

	return 0;
}
