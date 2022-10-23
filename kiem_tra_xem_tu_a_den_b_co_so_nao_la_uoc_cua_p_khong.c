#include "stdio.h"
int main(){
    int a, b, p, d, i;
    scanf("%d%d%d", &a, &b, &p);
    for(i=1;i<p;i++){
        if(p%i==0) {
            if (i >= a && i <= b) {
                d = 1;
            } else {
                d = 0;
            }
        }
    }
    if(d){
        printf("Co it nhat 1 so trong doan [%d, %d] la uoc cua %d.", a, b, p);
    }
    else{
        printf("Khong co so nao trong doan [%d, %d] la uoc cua %d.", a, b, p);
    }
    return 0;
}
