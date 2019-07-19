/*Implemente um algoritmo que dada uma frase, apresente 3 opções: tornar todas as letras em maiúsculas, tornar todas em minúsculas ou a primeira letra de cada palavra em maiúscula e demais minúsculas (limite 100 caracteres). Faça estas operações através de cálculos utilizando como base a tabela ASCII, utilize funções distintas (tudoMaiusculo(), tudoMinusculo(), primeiraMaiuscula()), utilizando o vetor de caracteres como uma variável global.*/

#include <stdio.h>

char frase[100];
void tudoMaiusculo();
void tudoMinusculo();
void primeiraMaiuscula();
int i;

int main()
{
	int opcao;
	
	printf("Digite uma frase com até 100 caracteres:\n");
	scanf("%[^\n]s",frase);
	printf("Escolha uma das opções abaixo:\n");
	printf("1 - para tornar todas as letras maiúsculas\n");
	printf("2 - para tornar todas as letras minúsculas\n");
	printf("3 - para tornar só a primeira letra de cada palavra maiúscula:\n");
	scanf("%d",&opcao);
				
	switch(opcao)
	{
		case 1 : tudoMaiusculo();
		break;
		case 2 : tudoMinusculo();
		break;
		case 3 : primeiraMaiuscula();
		break;
		default  : printf("Opção inválida!\n");
		break;			
	}
	for(i=0;frase[i]!=0;i++)
		printf("%c",frase[i]);	
	printf("\n");	
}
void tudoMaiusculo()
{
	for(i=0;frase[i]!=0;i++)
		if((frase[i]>='a')&&(frase[i]<='z')) frase[i] -='a'-'A';
}
void tudoMinusculo()
{
	for(i=0;frase[i]!=0;i++)
		if((frase[i]>='A')&&(frase[i]<='Z')) frase[i] +='a'-'A';
}
void primeiraMaiuscula()
{	
	tudoMinusculo();
	for(i=0;frase[i]!=0;i++)
		if(i==0) frase[i] -='a'-'A';
		else if(frase[i]==' ') frase[i+1] -='a'-'A';
}


