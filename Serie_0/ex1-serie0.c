//Implementar um programa que lê um número inteiro e imprime se o número é par ou ímpar. SUGESTÃO: Usar o operador de resto.

#include <stdio.h>

int main()
{
    int n;
    printf("Digite um número inteiro:\n");
    scanf("%d",&n);
    
    return (n%2==0) ? printf("O número é par\n") : printf("O número é ímpar\n");
}
