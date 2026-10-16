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
	mat.arr = (int**)malloc(sizeof(int*)*a);
	for(int i = 0; i < a; i++){
		mat.arr[i] = (int*)malloc(sizeof(int)*b);
	}
	return mat;
}

void freeMatrix(MATRIX * inp){
	for(int i = 0; i < inp->x; i++){
	       free((*inp)->arr[i]);
	}
        free(inp->arr);	       
	inp->x = 0;
	inp->y = 0;	
}

int findRow(MATRIX *mat){
	int result = 0;
	int max = 0;
	for(int i = 0; i < mat->x; i++){
		for(int j = 0; j < mat->y; j++){
			max += mat[i][j];	
		}
		if(result < max) result = max;
	}
	return result;
}

int * readMatrix();

bool read(*MATRIX){
	int res = 0;
       	int inp = 0;
	while ((res = scanf(" %d",&inp)) == 1){
		// TO DO:	
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
	printf(" Cislo radku s nejvetsi sumou je %d\n",findRow(&a));
	freeMatrix(&a);
	return 0;
}

