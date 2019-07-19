/*Implemente um algoritmo em C que obtém um número do usuário e utilizando laço para verifica se um número primo. 
Valide seu algoritmo comparando com a lista de primos Lista de números primos */ 

#include <stdio.h>

int main()
{
    int numero,primo,divisores,i;
    divisores=0;
    
    printf("Digite um número para verificar se é primo:\n");
    scanf("%d",&numero);
    
    for(i=1;numero>=i;i++)
    {
       if((numero%i)==0) divisores++;
    }
    if(divisores==2) printf("O número é primo!\n");
   
    else printf("O número NÂO é primo\n");  
}
