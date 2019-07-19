/*Um estudo sobre sensibilidade de pessoas a temperaturas da água identificou que a 
maioria das pessoas considera fria a água com temperaturas abaixo 
de 25 graus, morna entre 25 e 30 graus, e quente acima de 30 graus. 
Escreva implemente em C um algoritmo que mostre as palavras 
"fria", "morna" ou "quente" dependendo da temperatura da água que for informada.*/ 

#include <stdio.h>

int main()
{
    int temperatura;
    printf("Digite a temperatura em °C:\n");
    scanf("%d",&temperatura);
    
    if (temperatura<25) 
    {
        printf("Fria!\n");
    }
    else if (temperatura<=30)
    {
        printf("Morna!\n");
    }
    else printf("Quente\n");
}
