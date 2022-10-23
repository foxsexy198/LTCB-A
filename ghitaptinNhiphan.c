#include <stdio.h>
struct Complex{
	double image, real;
};
int main(){
	struct Complex c = {5, 7};
	FILE *fptr;
	fptr = fopen("Complex.bin", "wb");
	if(!fptr){
		printf("Errors");
		return 1;
	}
	fwrite(&c, sizeof(c), 1, fptr);
	fclose(fptr);
	return 0;
}

