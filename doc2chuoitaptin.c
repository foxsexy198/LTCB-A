#include <stdio.h>
int main(){
	char hoten[50], name[30];
	FILE *fptr;
	fptr = fopen("ltcb_taptin.txt", "r");
	fgets(hoten, 19, fptr);
	fgets(name, 17, fptr);
	fclose(fptr);
	printf("Ho ten: %s\n", hoten); // doc chuoi
	printf("Ho ten: %s", name);
	return 0;
}
