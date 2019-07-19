/*Implementar um programa em C para ler dois números inteiros e imprime uma mensagem 
indicando se os números lidos são iguais ou diferentes. 
Caso sejam diferentes, computar a média dos mesmos. */ 

#include <stdio.h>

int main()
{
    
    float n1,n2,media;
    
    printf("Digite o 1º número:\n");
    scanf("%f",&n1);
    printf("Digite o 2º número:\n");
    scanf("%f",&n2);
    
    if(n1==n2)
    {
        printf("Os números são iguais!\n");    
    }
    else
    {
        media=(n1/2)+(n2/2);
        printf("Os números são diferentes!\ne a média entre os dois é:%.2f\n",media);
    }
}
