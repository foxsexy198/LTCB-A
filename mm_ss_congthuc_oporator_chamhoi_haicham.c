#include<stdio.h>
int main(){
	int seconds, d, h, m, s;
	scanf("%d", &seconds);
    s = seconds % 60;
    m = (seconds / 60) % 60;
    h = (seconds / 3600) % 24;
    d = seconds / 3600 / 24;
	(d > 0) ?printf("%d days %02d:%02d:%02d\n", d, h, m, s)
            :printf("%02d:%02d:%02d\n", h, m, s);
	return 0;
}
