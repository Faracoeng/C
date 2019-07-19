/*Faça um programa que leia um número entre 0 e 10, e escreva este número por extenso. Use o comando switch. */ 

#include <stdio.h>

int main()
{
    int numero;
    
    printf("Digite um número entre 0 e 10\n");
    scanf("%d",&numero);

    switch(numero)
    {
        case 0: printf("Zero!\n"); break;
        case 1: printf("Um!\n"); break;
        case 2: printf("Dois!\n"); break;
        case 3: printf("Três!\n"); break;
        case 4: printf("Quatro!\n"); break;
        case 5: printf("Cinco!\n"); break;
        case 6: printf("Seis!\n"); break;
        case 7: printf("Sete!\n"); break;
        case 8: printf("Oito!\n"); break;
        case 9: printf("Nove!\n"); break;
        case 10: printf("Dez!\n"); break;
        default: printf("Número digitado não está entre 0 e 10\n");
    }
    
    
}
