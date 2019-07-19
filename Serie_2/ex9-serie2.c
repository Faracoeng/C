/*Implemente um algoritmo em C que conta a ocorrência de cada letra (incluindo números de 0 a 9) dada uma frase. 
Deve ignorar se a letra foi digitada em maiúscula ou minúscula (portando somar junto). 
Limite 100 caracteres.*/ 

#include <stdio.h>

int main()
{
	char frase[100];
	int  letras[26],numeros[10],i,j,tamLetras,tamNumeros;
	
	tamLetras=(sizeof(letras)/sizeof(int));
	tamNumeros=(sizeof(numeros)/sizeof(int));
	
	for (i=0;i<tamLetras;i++) letras[i] = 0;
	for (i=0;i<tamNumeros;i++) numeros[i] = 0;
	for (i=0;i<sizeof(frase);i++) frase[i] = '0';

	printf("Digite uma frase com no máximo 100 caracteres:\n");
	scanf("%[^\n]s",frase);

	for(i=0;frase[i]!=0;i++)
	{
		if((frase[i]>='A') && (frase[i]<='Z')) letras[frase[i]-'A']++;

		else if((frase[i]>='a') && (frase[i]<='z')) letras[frase[i]-'a']++;
			
		else if((frase[i]>='0') && (frase[i]<='9')) numeros[frase[i]-'0']++;	
	}
	char caracter='A';
	for(j=0;j<tamLetras;j++)
	{	
			
		if(letras[j]!=0)
		{
			printf("Quantidades do caracter %c ou %c:%d\n",caracter+32,caracter,letras[j]);
		}
		caracter++;
	}
	for(j=0;j<tamNumeros;j++)
	{	
		if(numeros[j]!=0)
		{
			printf("Quantidades do número %d:%d\n",j,numeros[j]);
		}
	}
}
