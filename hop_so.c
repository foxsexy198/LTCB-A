#include<stdio.h>
#include<math.h>
int main(){
    int n, i, flag=0;
    scanf("%d", &n);
    for(i=2; i<=sqrt(n); i++){
        if(n%i==0)
            flag=1;
    }
    if(flag==0)
        printf("%d khong phai la hop so.", n);
    else
        printf("%d la hop so.", n);
    return 0;
}
