/*Dado um número inteiro positivo, 
calcular a soma de todos os números inteiros compreendidos entre 0 e o número dado. 
Fazer uma versão com while e outra com for.*/ 

#include <stdio.h>

int main()
{
    int numero,i,soma;
 
    printf("Digite um número inteiro:");
    scanf("%d",&numero);

    for(i=0;i<=numero;i++)
    {
        soma=soma+i;
    }
    printf("A soma é %d\n",soma);
    
}
