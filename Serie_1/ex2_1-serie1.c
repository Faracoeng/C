/*Dado um número inteiro positivo, 
calcular a soma de todos os números inteiros compreendidos entre 0 e o número dado. 
Fazer uma versão com while e outra com for.*/ 

#include <stdio.h>

int main()
{
    int numero,contador,soma;
    
    contador=0;
    
    printf("Digite um número inteiro:");
    scanf("%d",&numero);

    while(numero>=contador)
    {
        soma=soma+contador;
        contador++;
    }
    printf("A soma é %d\n",soma);
    
}
