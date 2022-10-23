#include <stdio.h>
int main(){
	int a, b;
	FILE *fptr;
	fptr = fopen("ltcb_taptin.txt", "r");
	fscanf(fptr,"%d%d", &a, &b);
	fclose(fptr);
	printf("a = %d b = %d", a, b); //doc so, tap tin chi co so
	return 0;
}
