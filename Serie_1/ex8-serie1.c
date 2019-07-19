/*
Usando o comando for aninhado, construa um programa que implemente a figura abaixo. 
A margem esquerda (margem de espaços), o caracter do desenho, o número de linhas vazadas 
e o tamanho horizontal da figura devem ser lidos pelo teclado. Na figura abaixo representa uma saída quando a margem esquerda é 0, o 
caractere do desenho é 'a', o número de linhas vazadas é 1 e o tamanho horizontal é 10 
aaaaaaaaaa
a        a
aaaaaaaaaa
*/ 

#include <stdio.h>

int main()
{
    int espacos,linhasVazadas,colunas,j,i,k;
    char caracter;
    printf("Digite a quantidade de espaços antes da figura:\n");
    scanf("%d",&espacos);
    printf("Digite a quantidade linhas vazadas da figura:\n");
    scanf("%d",&linhasVazadas);
    printf("Digite a quantidade colunas da figura:\n");
    scanf("%d",&colunas);
    printf("Digite o caracter a ser desenhado:\n");
    scanf(" %c",&caracter);

        for(i=0;i<linhasVazadas+2;i++)
        {   
            printf("\n");
            for(j=0;j<=colunas;j++)
            {  
                if(j==0)
                {
                    for(k=0;k<espacos;k++)
                    {
                        printf(" ");
                    }
                }
                if((i==0)||(j==0)||(i==linhasVazadas+1)||(j==colunas))
                {
                    printf("%c",caracter);
                }
                else
                {
                    printf(" ");
                }
            }
        }
	printf("\n");
}
