#include <stdio.h>
struct Point{
	double X, Y;
};

int isTriangle(struct Point A, struct Point B, struct Point C){
	if(((A.X+B.X > C.X) && (A.X+C.X > B.X) && (B.X+C.X > A.X)) || ((A.Y+B.Y > C.Y)  (A.Y+C.Y > B.Y) || (B.Y+C.Y) > A.Y)
		return 1;
	else
		return 0;
}
int main(){
	struct Point A={1,2};
struct Point B={1,3};
struct Point C={1,#include <stdio.h>
#include <math.h>
struct Point{
	double X, Y;
};

int isTriangle(struct Point A, struct Point B, struct Point C){
	double AB = sqrt(pow(A.X - B.X, 2) + pow(A.Y - B.Y, 2));
	double AC = sqrt(pow(A.X - C.X, 2) + pow(A.Y - C.Y, 2));
	double BC = sqrt(pow(B.X - C.X, 2) + pow(B.Y - C.Y, 2));
	if((AB + AC > BC) && (AB + BC > AC) && (AC + BC > AB))
		return 1;
	else
		return 0;
}
int main(){
struct Point A={1,2};
struct Point B={1,3};
struct Point C={2,3};
	
if (isTriangle(A,B,C))
	printf("YES");
else printf("NO");
	return 0;
}10};
if (isTriangle(A,B,C))
	printf("YES");
else printf("NO");
	return 0;
}
