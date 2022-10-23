#include<stdio.h>
int main () {
    int d, m, y, day;
    scanf("%d %d %d", &d, &m, &y);
    switch (m) {
        case 1:
            day=0;
            break;
        case 2:
            day=31;
            break;
        case 3:
            day=59;
            break;
        case 4:
            day=90;
            break;
        case 5:
            day=120;
            break;
        case 6:
            day=151;
            break;
        case 7:
            day=181;
            break;
        case 8:
            day=212;
            break;
        case 9:
            day=243;
            break;
        case 10:
            day=273;
            break;
        case 11:
            day=304;
            break;
        case 12:
            day=334;
            break;
    }
    if((y%4==0 && y%100!=0) || y%400==0){
        if(m==3 || m==4 || m==5 || m==6 || m==7 || m==8 || m==9 || m==10 || m==11 || m==12){
            printf("%d", day+d+1);
        }
        else{
            printf("%d", day+d);
        }
    }
    else
        printf("%d", day+d);
    return 0;
}
