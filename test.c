#include <stdio.h>
#include <string.h>
#define MaxLength 40

typedef struct{
    char MSSV[10];
    char HoTen[50];
    float DiemLT, DiemTH1, DiemTH2;
}SinhVien;

typedef struct{
    SinhVien A[40];
    int n;
}DanhSach;

DanhSach dsRong(){
    DanhSach L;
    L.n = 0;
    return L;
}
// void swap(int *a, int *b){
//     int tmp = *a;
//         *a = *b
//         *b = tmp;
// }
void insertDS(SinhVien x, int p, DanhSach *pL){
    if(pL->n == MaxLength)
        printf("DS day");
    else{
    	int i;
        for(i=pL->n+1; i>=p; i--)
            pL->A[i] = pL->A[i-1];
        pL->A[p] = x;
        pL->n++;
    }
}
void xoa(char s[]){
    int len = strlen(s);
    if(s[len-1] == '\n')
        s[len-1] = '\0';
}
void nhapDS(DanhSach *pL){
    *pL = dsRong();
    int m;
    scanf("%d", &m);
    SinhVien x;
    while(m--){
        scanf("%s", &x.MSSV);
        getchar();
        fgets(x.HoTen, 50, stdin);
        xoa(x.HoTen);
        scanf("%f%f%f", &x.DiemLT, &x.DiemTH1, &x.DiemTH2);
        insertDS(x, pL->n, pL);
    }
}
void inDS(DanhSach L){
    int i=0;
    while(i != L.n){
        printf("%s - %s - %.2f - %.2f - %.2f\n", L.A[i].MSSV, L.A[i].HoTen, L.A[i].DiemLT, L.A[i].DiemTH1, L.A[i].DiemTH2);
        i++;
    }
}
float tongdiem(float LT, float TH1, float TH2){
    return LT+TH1+TH2;
}
DanhSach khongdat(DanhSach L){
    DanhSach K;
    K = dsRong(K);
    int i;
    for(i=0; i < L.n; i++){
        if(tongdiem(L.A[i].DiemLT, L.A[i].DiemTH1, L.A[i].DiemTH2) < 4){
            K.A[K.n] = L.A[i];
            K.n++;
        }
    }
    return K;
}
int main(){
    DanhSach L;
    nhapDS(&L);
    inDS(L);
    DanhSach K = khongdat(L);
    printf("Sinh vien KHONG DAT\n");
    inDS(K);
    return 0;
}
