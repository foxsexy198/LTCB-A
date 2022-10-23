#include <stdio.h>
int main(){
//	int a = 19, b = 29;
	FILE *fptr;
	fptr = fopen("ltcb_taptin.txt", "a");
	fprintf(fptr, " Tran Thuy Duy");
	fclose(fptr);
	return 0;
}
