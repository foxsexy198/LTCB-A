#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct{
	int x, y;
}Point;
int main(){
	Point P;
	FILE *fptr;
	fptr = fopen("Point.bin", "wb");
	if(!fptr){
		printf("Errors");
		return 1;
	}
	srand(time(0));
	int i;
	for(i=0; i<100; i++){
		P.x = rand()%100;
		P.y = rand()%100;
		printf("%d: %d %d\n", i, P.x, P.y);
		fwrite(&P, sizeof(P), 1, fptr);
		
	}
	
	fclose(fptr);
	return 0;
}
