/*Implementar uma função que recebe dois vetores de inteiros como parâmetro e o tamanho dos mesmos (suponha vetores de mesmo tamanho). A função deve retornar o número de elementos iguais comparados posição por posição. O esqueleto da função deve ser como:

*/
#include <stdio.h>

int compara_vetores(int ve1[],int ve2[], int tamanho)
{
 	
	int num_elementos=0,j;
	for(j=0;j<tamanho;j++)
	{
			if(ve1[j]==ve2[j])
			{
				num_elementos ++;			
			}			
	}
 
  	return num_elementos;
}


int main()
{
	
	int i,qtd,tam;
	printf("Digite o tamanho dos vetores:");
	scanf("%d",&tam);
	int ve1[tam],ve2[tam];
    for(i=0;i<tam;i++)
	{
		printf("Digite o número da %dª posição do vetor 1:",i+1);
		scanf("%d",&ve1[i]);
	}
	for(i=0;i<tam;i++)
	{
		printf("Digite o número da %dª posição do vetor 2:",i+1);
		scanf("%d",&ve2[i]);
	} 
	qtd=compara_vetores(ve1,ve2,tam); 
	printf("O número de elementos iguais é:%d\n",qtd);
}
