/*Faça um algoritmo que apresente a sequencia 
de Fibonacci dado um valor “n” que representa a quantidade de números em série que se deseja exibir */ 

#include <stdio.h>

int main()
{
    int anterior,atual,proximo,n,i;
    
    printf("Digite o número de vezes para imprimir a sequência de fibonacci:");
    scanf("%d",&n);
    anterior=0;
    atual=1;
    
    for(i=0;i<=n;i++)
    {
        printf("%d\n",anterior);
        proximo=anterior+atual;
        anterior=atual;
        atual=proximo;
    }
    
}
