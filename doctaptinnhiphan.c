#include <stdio.h>
struct Complex{
	double image, real;
};
int main(){
	struct Complex c = {5, 7};
	FILE *fptr;
	fptr = fopen("Complex.bin", "rb");
	if(!fptr){
		printf("Errors");
		return 1;
	}
	fread(&c, sizeof(c), 1, fptr);
	fclose(fptr);
	printf("%.3lf %.3lf", c.image, c.real);
	return 0;
}
