#include <stdio.h>
int main(){
	char hoten[50];
	FILE *fptr;
	fptr = fopen("ltcb_taptin.txt", "r");
	fgets(hoten, 19, fptr);
	fclose(fptr);
	printf("Ho ten: %s", hoten); // doc chuoi
	return 0;
}
