/*Teste o exemplo dado na apostila da UFMG página 46 e execute a AUTO AVALIAÇÂO sugerida na página seguinte. */

#include <stdio.h>
int main ()
{  
	int num[100];
 	/* Declara um vetor de inteiros de 100 posicoes */
	int count=0;
	int totalnums;
	do
 	{	
		if(count>100)           //inicio do if inserido para teste
		{
			count++;	
			break;		
		}						//fim do if nserido para teste
		printf ("\nEntre com um numero (-999 p/ terminar): ");
		scanf ("%d",&num[count]);
		count++;
			
		
	} 
	while (num[count-1]!=-999);
	totalnums=count-1;
	printf ("\n\n\n\t Os números que você digitou foram:\n\n");
	for(count=0;count<totalnums;count++)
		printf (" %d",num[count]);
	return(0);
} 
