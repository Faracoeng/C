/*Implementar um programa para ler 4 números inteiros e imprime uma 
mensagem se a soma dos dois primeiros for igual ou 
menor que a soma dos dois últimos.*/ 

#include <stdio.h>

int main()
{
    int n1,n2,n3,n4,soma1,soma2;
    
    printf("Digite 4 números inteiros:\n");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    
    soma1=n1+n2;
    soma2=n3+n4;
    
    if (soma1<soma2) 
    {
        printf("A soma dos dois primeiros números é menor do que a soma dos dois últimos!\n");
    }
    else if (soma1==soma2)
    {
        printf("A soma dos dois primeiros números é igual a soma dos dois últimos!\n");
    }
    else
    {
        printf("A soma dos dois primeiros números é maior do que a soma dos dois últimos!\n");
    }
        
}
