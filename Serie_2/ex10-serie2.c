/*
Implemente um algoritmo em C que calcula a média de notas de alunos. Para isso deve solicitar a quantidade de alunos, em seguida obter o nome de cada aluno e depois recebe 5 notas por aluno (num único scanf). Usar uma matriz de float de duas dimensões global. Deve então calcular as médias e apresentar: Nomes dos alunos que ficaram em recuperação (média <6), Nome do aluno que tirou a maior média, Obs.: Criar a função calculaMedia(). 
*/ 

#include <stdio.h>

int alunos=5;					  //Alterar quantidades de alunos aqui!	
float notas[5][5],medias[5];      //notas[x][y],medias[x];onde x é a qtd de alunos e y quantidade de notas.
char nomes[5][30];				  //char[x][z];onde z é a qtd de caracter máxima de cada homem.

float calculaMedia(float notas[5])
{	
	int i;
	float media=0;

	for(i=0;i<5;i++)
	{
			media += notas[i]/5;		
	}
	return media;
}
int main()
{
	int i,indiceMaior=0;
	float media;	
	
	for(i=0;i<alunos;i++)
	{
		printf("Digite o nome do %dº aluno:\n",i+1);
		scanf("%s",nomes[i]);
		printf("Digite as 5 notas do %dº aluno:\n",i+1);
		scanf("%f%f%f%f%f",&notas[i][0],&notas[i][1],&notas[i][2],&notas[i][3],&notas[i][4]); //Se alterar numero de notas, alterar essa linha.
	}
	printf("---Alunos em recupeção---\n\n");
	for(i=0;i<alunos;i++)
	{	
		media=calculaMedia(notas[i]);
		medias[i]=media;
		if(medias[i]<6) printf("%s - média:%.2f\n",nomes[i],medias[i]);	
		if(medias[i]>medias[indiceMaior]) indiceMaior=i;
	}
	printf("\n---Aluno com maior média---\n\n%s - média:%.2f\n\n",nomes[indiceMaior],medias[indiceMaior]);
}
