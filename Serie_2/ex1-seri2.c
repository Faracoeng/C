/*Implementar um programa em C para ler 10 números reais (float) para um vetor. Usar o comando while, imprimindo os valores lidos em um segundo laço while.  */

#include <stdio.h>

int main()
{
	float n[10];
	int i;
	i=0;
	while(i<10)
	{
		printf("Digite o %dº número real:",i+1);
		scanf("%f",&n[i]);
		i++;	
	}
	i=0;
	printf("\nOs números digitados foram:\n");
	while(i<10)
	{
		printf("%f\n",n[i]);
		i++;	
	}
}
