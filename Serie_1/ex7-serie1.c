/*Implemente em C uma calculadora que realiza operações de soma ou subtração de dois números. 
A calculadora deve operar em um laço infinito encerrando sua operação se o usuário digitar "q" */ 

#include <stdio.h>

int main()
{
    float n1,n2,resultado;
    char opcao;
    while(1)
    {
        printf("--------------------------\nDigite a opção desejada:\ns - Somar dois números\nd - Diminuir dois números\nq - Sair\n");
        scanf(" %c",&opcao);
        if(opcao=='q')
        {
            printf("Saindo...\n");
            break;
        }
        else if(opcao=='s')
        {
            printf("Digite o primeiro número:\n");
            scanf("%f",&n1);
            printf("Digite o segundo número:\n");
            scanf("%f",&n2);
            resultado=n1+n2;
            printf("A soma dos dois números é:%f\n",resultado);
        }
        else if(opcao=='d')
        {
            printf("Digite o primeiro número:\n");
            scanf("%f",&n1);
            printf("Digite o segundo número:\n");
            scanf("%f",&n2);
            resultado=n1-n2;
            printf("A diferença dos dois números é:%f\n",resultado);
        }
        else
        {
            printf("Opção inválida:\n");
        }
          
    }
}
