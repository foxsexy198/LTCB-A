#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct{
	int x, y;
}Point;
int main(){
	Point P;
	FILE *fptr;
	fptr = fopen("Point.bin", "rb");
	if(!fptr){
		printf("Errors");
		return 1;
	}
	int i;
	printf("Index:");
	scanf("%d", i);
	fseek(fptr, i*sizeof(Point), SEEK_SET); //doi con tro chuot toi file can doc
	fread(&P, sizeof(P), 1, fptr);
	printf("%dth Point: (%d %d)",i, P.x, P.y);
	fclose(fptr);
	return 0;
}
