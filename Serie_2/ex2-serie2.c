/*Modificar o exercício para computar a média dos 10 números que estão no vetor.  */

#include <stdio.h>

int main()
{
	float n[10],media;
	int i;
	i=0;
	media=0;

	while(i<=9)
	{
		printf("Digite o %dº número real:",i+1);
		scanf("%f",&n[i]);
		media += n[i]/10;
		i++;	
	}
	printf("A média é %f\n",media);
}
