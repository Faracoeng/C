/*Considere um vetor global de floats chamado vetRnd de tamanho 100. Construa uma função que inicia este vetor com 100 números randômicos entre 1 e 6. Imprima em tela os valores.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float vetRnd[100];

int main()
{
	
	int i;
	float temp;
    srand((unsigned)time(NULL));

    for(i=0;i<100;i++)
	{
		do
		{		
		temp=((rand() % 600)+1)/100.0;
		}while(temp<1);		
		vetRnd[i]=temp;	
	}
	for(i=0;i<100;i++)
	{
		printf("numero %d: %.2f\n",i+1,vetRnd[i]);
	}
        
}
