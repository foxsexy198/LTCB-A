#include "stdio.h"
int main(){
    unsigned int n, a;
    scanf("%u", &n);
    while (n!=0){
        a=n%10;
        n=n/10;
        printf("%u", a);
    }
    return 0;
}
