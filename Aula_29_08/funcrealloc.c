/*Exemplo de usa da fun��o realloc*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	//int *p = (int *)malloc(5*sizeof(int));
	int *p = (int *)calloc(5,sizeof(int));
	for (i=0; i<5; i++){
		p[i] = i+1;
	}
	for (i=0; i<5; i++){
		printf("%d\n",p[i]);
	}
	printf("\n");
	//Diminui o tamanho do array
	p = (int *)realloc(p,3*sizeof(int));
	for (i=0; i<3; i++){
		printf("%d\n",p[i]);
	}
	printf("\n");
	//Aumenta o tamanho do array
	p = (int *)realloc(p,10*sizeof(int));
	for (i=0; i<10; i++){
		printf("%d\n", p[i]);
	}
	system("pause");
	return 0;
}