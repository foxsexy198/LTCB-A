#include<stdio.h>
int bienso(int n){
    int r, sum=0;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n/=10;
    }
    return sum%10;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", bienso(n));
    return 0;
}
