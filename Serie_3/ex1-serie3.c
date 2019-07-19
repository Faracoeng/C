/*Implemente um programa em C que solicita ao usuário digitar duas palavras, 
o programa analisa estas palavras e diz se são ou não anagramas (palavra formada pela alteração da ordem ou transposição de letras) 
ex.: “America” e “Iracema”, “Roma” e “Amor”, “Semolina” e “Is no meal” são anagramas) 
*/

#include <stdio.h>

int main()
{
	char palavra1[20],palavra2[20];
	int tam1=0,tam2=0,i,j,letrasIguais=0;
	
		
	for(i=0;i<20;i++) palavra1[i]='0';
	for(i=0;i<20;i++) palavra2[i]='0';
	printf("Digite a primeira palavra:\n");
	scanf("%s",palavra1);
	printf("Digite a segunda palavra:\n");
	scanf("%s",palavra2);
	
	for(i=0;palavra1[i]!=0;i++) tam1++;
	for(i=0;palavra2[i]!=0;i++) tam2++;
	if(tam1==tam2) 
	{	
		for(i=0;i<tam1;i++) 	
			for(j=0;j<tam2;j++)				
				if(palavra1[i]==palavra2[j]) 
				{
					letrasIguais++;
					palavra2[j]='0';
				}
		if(letrasIguais==tam1) printf("\nAs Palavras são anagramas\n\n");
		else printf("\nAs palavras não são anagramas\n\n");
	}
	else printf("\nAs palavras não são anagramas\n\n");	
}
