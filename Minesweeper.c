#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define M 5
#define N 5
#define MINE -1

int B[M][N];
int T[M][N];
void init(){
	int i, j;
	for(i=0; i<M; i++){
		for(i=0; i<N; i++){
			B[i][j] = 0;
			T[i][j] = 0;
		}
	int k = 1;
	int r, c;
	srand(time(NULL));
	for(i = 0; i<k; i++){
		do{
			
			c = rand()%5;
			r = rand()%5;
		} while(B[r][c] == MINE);
		B[r][c] = MINE;
	}
}
}
void count_mines(){
	int i,j;
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			if(B[i][j] != MINE){
				int cnt = 0;
				if(i-1 >= 0 && j-1 >= 0 && B[i-1][j-1] == MINE)
					cnt++;
				if(i-1 >= 0 && B[i-1][j] == MINE)
					cnt++;
				if(i-1 >= 0 && j+1 < N && B[i-1][j+1] == MINE)
					cnt++;
				if(i >= 0 && j-1 >= 0 && B[i][j-1] == MINE)
					cnt++;
				if(i >= 0 && j+1 < N && B[i][j+1] == MINE)
					cnt++;
				if(i+1 >= 0 && j-1 >= 0 && B[i+1][j-1] == MINE)
					cnt++;
				if(i+1 >= 0 && B[i+1][j] == MINE)
					cnt++;
				if(i+1 >= 0 && j+1 < N && B[i+1][j+1] == MINE)
					cnt++;
				B[i][j] = cnt;
			}
			
		}
	}
}
void  printMap1(){
	printf("  ");
	int i, j;
	for(j=0; j<N; j++)
		printf("%d ", j%10);
	printf("\n");
	for(i=0; i<M; i++){
		printf("%d ", i%10);
		for(j=0; j<N; j++){
			if(B[i][j] == MINE)
				printf("x ");
			else if(B[i][j] == 0)
				printf(". ");
			else
				printf("%d ", B[i][j]);
			
		}
		printf("\n");
	}
}
void open_cell_1(int r, int c){
	if(T[r][c] == 0)
		T[r][c] == 1;
}
void printMap2(){
	int i,j;
	printf("  ");
	for(j=0; j<N; j++)
		printf("%d ", j%10);
	printf("\n");
	for(i=0; i<M; i++){
		printf("%d ", i%10);
		for(j=0; j<N; j++){
			if(T[i][j] == 0)
				printf("# ");
			else{
				if(B[i][j] == MINE)
					printf("x ");
				else if(B[i][j] == 0)
					printf(". ");
				else
					printf("%d ", B[i][j]);
			}
		}
		printf("\n");
	}
}
void open_cell_2(int r, int c){
			T[r][c] = 1;
			if(B[r][c] == 0){
				if(r-1 >= 0 && c-1 >= 0)
					T[r-1][c-1] = 1;
					
				if(r-1 >= 0)
					T[r-1][c] = 1;
					
				if(r-1 >= 0 && c+1 < N)
					T[r-1][c+1] = 1;
					
				if(r >= 0 && c-1 >= 0)
					T[r][c-1] = 1;
					
				if(r >= 0 && c+1 < N)
					T[r][c+1] = 1;
					
				if(r+1 >= 0 && c-1 >= 0)
					T[r+1][c-1] = 1;
					
				if(r+1 >= 0)
					T[r+1][c] = 1;
					
				if(r+1 >= 0 && c+1 < N)
					T[r+1][c+1] = 1;
			}
}

void open_cell_3(int r, int c){
	if(r < 0 || r >= M || c < 0 || c >= N)
		return;
	if(T[r][c] == 1)
		return;
	if(B[r][c] != 0)
		T[r][c] = 1;
	else{
		open_cell_3(r+1, c+1);
			T[r][c] = 1;
		open_cell_3(r+1, c);
			T[r][c] = 1;
		open_cell_3(r+1, c-1);
			T[r][c] = 1;
		open_cell_3(r, c+1);
			T[r][c] = 1;
		open_cell_3(r, c-1);
			T[r][c] = 1;
		open_cell_3(r-1, c+1);
			T[r][c] = 1;
		open_cell_3(r-1, c);
			T[r][c] = 1;
		open_cell_3(r-1, c-1);
			T[r][c] = 1;
	}
}
int count_remain(){
	int cnt = 0;
	int i, j;
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			if(T[i][j] == 0)
				cnt++;
		}
	}
	return cnt;
}
int main(){
	int r, c;
	int k = 2;
	init();
	count_mines();
	while(1){
		printMap2();
		printf("Moi nhap toa do o can mo: ");
		scanf("%d%d", &r, &c);
		if(B[r][c] == MINE){
			printMap1();
			printf("\nTHUA ROI LIU LIU ^^ ");
			break;
		}
		else
			open_cell_2(r, c);
		if(count_remain() == k){
			printMap2();
			printf("\nTHANG ROI KIA DI CHO KHAC CHOI DI KU");
			break;
		}
	}
	
	return 0;
}
