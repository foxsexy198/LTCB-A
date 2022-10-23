#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_M 100
#define MAX_N 100
typedef struct {
	int m, n;
	int A[MAX_M][MAX_N];
	int r, c;
} State;
void init_state(State *S, char *fname)
{
    FILE *f = fopen(fname, "r");
    fscanf(f, "%d %d", &S->m, &S->n);
    int i, j;
    for (i = 0; i < S->m; i++)
    {
        /* code */
        for (j = 0; j < S->n; j++)
        {
            /* code */
            fscanf(fptr, "%d", &S->A[i][j]);
        }
    }
    fscanf(fptr, "%d %d", &S->r, &S->c);
}
void print_state(State S){
	//int map
	S.A[S.r][S.c]=S.m*S.n;
	int i, j;
	for(i=0;i<S.m;i++){
		for(j=0;j<S.n;j++){
			if(S.A[i][j]==S.n*S.m)
				printf(".. ");
			else
				printf("%2d ", S.A[i][j]);
		}
		printf("\n");
	}
	printf("%d %d", S.r, S.c);	
	printf("\n");
}
int is_finished(State S){
	//neu ma sap xep dung het cac vitri thi tra ve 1
	int i, j;
	for(i=0;i<S.m;i++){
		for(j=0;j<S.n;j++){
			if(S.A[i][j]!=(i*S.n + j + 1))
				return 0;
		}
	}
	return 1;
}

int up(State S, State *N){
		*N=S;
	
	if(S.r==0)
		return 0;
	else
	{
		N->A[S.r][S.c]=N->A[S.r-1][S.c];
		N->A[S.r-1][S.c]=N->m * N->n;
		(N->r) --;
		return 1;
	}
}

int down(State S, State *N){
		*N=S;
	
	if(S.r==(S.m-1))
		return 0;
	else
	{
		N->A[S.r][S.c]=N->A[S.r+1][S.c];
		N->A[S.r+1][S.c]= N->m * N->n;
		(N->r) ++;
		return 1;
	}
}

int left(State S, State *N){
		*N=S;
	
	if(S.c==0)
		return 0;
	else
	{
		N->A[S.r][S.c]=N->A[S.r][S.c-1];
		N->A[S.r][S.c-1]= N->m * N->n;
		(N->c) --;
		return 1;
	}
}

int right(State S, State *N){
		*N=S;
	
	if(S.c==(S.n-1))
		return 0;
	else
	{
		N->A[S.r][S.c]=N->A[S.r][S.c+1];
		N->A[S.r][S.c+1]= N->m * N->n;
		(N->c) ++;
		return 1;
	}
}

int main() {
		
		State S, N;
		char cmd[20];
        char fname[20];
        scanf("%s", fname);
        //xoa xuong dong
		
		int len = strlen(fname);
        if(fname[len-1] == '\n'){
        	len--;
			fname[len]='\0';
		}
			
				
        init_state(&S, fname);
        
        while (!is_finished(S)) {
        	
			print_state(S);

            //yeu cau nguoi dungscanf nhap : UP, DOWN, LEFT, RIGHT or EXIT
            scanf("%s", cmd);

            //xu ly lenh
            if(strcmp(cmd,"UP") == 0){
            	if(up(S, &N)){
            		S=N;
				}else{
					printf("Illegal move.\n");
				}
				
			}else if(strcmp(cmd, "DOWN") == 0){
				if(down(S, &N)){
					S=N;
				}else{
					printf("Illegal move.\n");
				}
			}else if(strcmp(cmd,"LEFT") == 0){
				if(left(S, &N)){
					S=N;
				}else{
					printf("Illegal move.\n");
				}
			}else if(strcmp(cmd,"RIGHT") == 0){
				if(right(S, &N)){
					S=N;
				}else{
					printf("Illegal move.\n");
				}
			}else if(strcmp(cmd,"EXIT") == 0){
				printf("You lose!\n");
				return 0;
			}else{
				printf("Unknown command, please enter: UP, DOWN, LEFT, RIGHT or EXIT\n");
			}
			
			if (is_finished(S))
		{
			printf("You win!");
		}
			
		}
		

  return 0;
}
