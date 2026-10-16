#include <stdio.h>

int main(){
	printf("Zadej posloupnost:\n");
	int res = 0;

	int min = 0, minR = 0;
	int inp = 0;
	while((res = scanf(" %d", &inp)) == 1){
		if(inp == 0) break;
		if((inp < 0) && (inp % 2 == 0)){
			if(min == 0 && minR == 0){
				min = inp;
				minR= inp;
			}else if(inp < min){
				minR = min;
				min = inp;
			}	
		}
	}

	char c;
	int ret = scanf(" %c", &c);
	if( ret != EOF){
		printf("Nespravny vstup.\n");
		return 1;
	}

	printf("Vysledek je : %d\n", minR);

	return 0;
}

