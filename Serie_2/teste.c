/*Implemente um algoritmo em C que conta a ocorrência de cada letra (incluindo números de 0 a 9) dada uma frase. 
Deve ignorar se a letra foi digitada em maiúscula ou minúscula (portando somar junto). 
Limite 100 caracteres.*/ 

#include <stdio.h>

int main()
{
	int i=0,qtdCaracter=0;
	char frase[100];	
	printf("Digite uma frase com até 100 caracteres:\n");
	scanf("%[^\n]s",frase);
	printf("Caracter 0: %c\nfrase = %s\n",frase[i],frase);
	for(i=0;frase[i] != 0;i++)
	{
		if (frase[i] == ' ')
			printf("%c",'E');
		else
			qtdCaracter++;	
			
	}

	printf("A frase possui %d caracter(es):\n",qtdCaracter);
}
