/*Modificar o exercício anterior para computar a quantidade de números do vetor que estão acima da média.  */

#include <stdio.h>

int main()
{
	float n[10],media;
	int i,qtd;
	i=0;
	media=0;
	qtd=0;

	while(i<=9)
	{
		printf("Digite o %dº número real:",i+1);
		scanf("%f",&n[i]);
		media += n[i]/10;
		i++;	
	}
	i=0;
	while(i<=9)
	{
		if(n[i]>media)
		{
			qtd++;
		}
		i++;	
	}
	printf("A média é %f\n",media);
	printf("A quantidade de números acima da média é:%d\n",qtd);
}
