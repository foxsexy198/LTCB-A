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

   	a = nhapPhanSo(); // G?i h�m nh?p 1 ph�n s?

   	inPhanSo(a); // Hi?n th? ph�n s?

	return 0;
}
