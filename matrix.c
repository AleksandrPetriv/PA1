#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
	int **arr;
	int x;
	int y;
} MATRIX;

MATRIX initM(int a, int b){
	MATRIX mat;
	mat.x = a;
	mat.y = b;
	mat.**arr = (int**)malloc(sizeof(int*)*a);
	for(int i = 0; i < a; i++){
		mat.arr[i] = (int*)malloc(sizeof(int)*b);
	}
	return mat;
}

void freeMatrix(MATRIX * inp){
	for(int i = 0; i < (*inp)->x; i++){
		//free(inp->arr[1]
	       free((*inp)->arr[i]);
	}
		//free(inp->arr)
        free((*inp)->arr);	       
	(*inp).x = 0;
	(*inp).y = 0;	
}

int * readMatrix();

bool read(*MATRIX){
	int res = 0;
	int inp = 0;
	while ((res = scanf(" %d",&inp)) == 1){
		if(inp	
	}
}

int main(){
	printf("Zadejte velikost matice.\n");

	int x = 0, y = 0;
	if(scanf(" %d %d", &x, &y) != 2 || x <= 0 || y <= 0){
		printf("Nespravny vstup.\n");
		return 1;
	}

	MATRIX a = initM(x,y);

	if(!read(&a)){
		printf("Nespravny vstup.\n");
		return 1;
	}

	return 0;
}

