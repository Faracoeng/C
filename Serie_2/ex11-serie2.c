/*
Utilize a função rand() e gerador de semente srand() para gerar 6 números aleatórios distintos que variam de 1 a 60 e imprima esta sequencia em tela */ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	int i,numeros[6];
    
	srand((unsigned)time(NULL));

    for(i=0;i<6;i++)
	{		
		printf("%d\n",((rand() % 60)+1));
	}
}

