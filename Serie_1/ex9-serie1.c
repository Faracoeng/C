/*
Construa um programa para desenhar a seguinte figura de forma parametrizável (dado caracter, margem, e número de linhas):

AAAAAAAAAA
AAAAAAAA
AAAAAA
AAAA
AA
BB
BBBBB
BBBBBBBB
BBBBBBBBBBB
*/ 

#include <stdio.h>

int main()
{
    int espacos,linhas,colunas,j,i,k;
    char caracter1,caracter2;
    printf("Digite a quantidade de espaços antes da figura:\n");
    scanf("%d",&espacos);
    printf("Digite a quantidade de linhas da figura:\n");
    scanf("%d",&linhas);
    printf("Digite a quantidade de colunas da figura:\n");
    scanf("%d",&colunas);
    printf("Digite o caracter a ser desenhado na parte superior:\n");
    scanf(" %c",&caracter1);
    printf("Digite o caracter a ser desenhado na parte inferior:\n");
    scanf(" %c",&caracter2);
    
    for(i=0;i<linhas/2;i++)
    {
	printf("\n");
        for(j=colunas;j>0;j--)
        {
            if(j==colunas)
            {
                for(k=0;k<espacos;k++)
                {
                    printf(" ");
                }
            }
            printf("%c",caracter1);
        }

        colunas=colunas - 2;
    }
    colunas=colunas + 2;
    for(i=0;i<linhas/2;i++)
    {
	printf("\n");
        for(j=0;j<colunas;j++)
        {
            if(j==0)
            {
                for(k=0;k<espacos;k++)
                {
                    printf(" ");
                }
            }
            printf("%c",caracter2);
        }
        colunas=colunas + 2;
    }
    printf("\n\n");
}
