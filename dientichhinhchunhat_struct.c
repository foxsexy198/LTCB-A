#include <stdio.h>
struct Point{
	double X, Y;
};
struct Rect{
	struct Point LF;
	struct Point UR;
};
double area(struct Rect a){
	double dai = a.UR.X - a.LF.X;
	double rong = a.LF.Y - a.UR.Y;
	return dai * rong;
}
int main(){
	struct Rect r = {{10,2.5},{2,8.3}};
printf("%.5lf",area(r));
	return 0;
}
