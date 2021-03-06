/* Ponteiros.C */
/* Mostra o uso de ponteiros vari�veis */
#include <stdio.h>  
#include <stdlib.h> 

void reajusta20( float *, float *); /* prot�tipo */

int main()
{
	float val_preco, val_reaj;
	do
	{
		printf("\nInsira o pre�o atual: ");
		scanf("%f", &val_preco);
		reajusta20(&val_preco, &val_reaj); /* Enviando endere�os */
		printf("\nO pre�o novo � %.2f\n", val_preco);
		printf("O aumento foi de %.2f\n", val_reaj);
	} while( val_preco != 0.0);

	system("PAUSE");	
	return 0;		
}

/* reajusta20() */
/* Reajusta o pre�o em 20% */
void reajusta20(float *preco, float *reajuste) /* Recebendo ponteiros */
{
	*reajuste = *preco * 0.2;
	*preco *= 1.2;
}

