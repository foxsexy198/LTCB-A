#include<stdio.h>
int main(){
    int n, k;
    scanf("%d", &n);
    while(n!=0){
        k=n%10;
        printf("%d", k);
        n/=10;
    }
    return 0;
}
