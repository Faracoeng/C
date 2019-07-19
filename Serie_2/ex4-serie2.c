/*Refazer os exercícios anteriores usando o comando for;   */

#include <stdio.h>

int main()
{
	float n[10],media;
	int i,qtd;
	media=0;
	qtd=0;

	for(i=0;i<=9;i++)
	{
		printf("Digite o %dº número real:",i+1);
		scanf("%f",&n[i]);
		media += n[i]/10;
	}
	for(i=0;i<=9;i++)
	{
		if(n[i]>media)
		{
			qtd++;
		}
	}
	printf("A média é %f\n",media);
	printf("A quantidade de números acima da média é:%d\n",qtd);
}
