/*Desenvolva uma algoritmo em C para marcar o placar de um jogo de futebol, deve solicitar ao usuário digitar A ou B, 
ao digitar A é somado um gol a equipe A e o mesmo para a B. Se digitado F deve encerrar e mostrar o placar final. */ 

#include <stdio.h>

int main()
{
    int golsA,golsB;
    char opcao;
    
    golsA=0;
    golsB=0;
    
    printf("Digite as opções abaixo:\na-Caso o time A faça gol\nb-Caso o time B faça gol\nf-Para encerrar o jogo e mostrar o placar\n");
    scanf(" %c",&opcao);
    
    while(opcao!='f')
    {
        switch(opcao)
        {
            case 'a':
            {
                golsA++;
                break;
            }
            case 'b':
            {
                golsB++;
                break;
            }
            default:printf("Opção inválida!\nDigite novamente\n");
        }
        scanf(" %c",&opcao);
    }
    printf("O placar final foi de \nTime A:%d\nTime B:%d\n",golsA,golsB);
    
}
