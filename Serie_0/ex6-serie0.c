/*Implementar um programa para ler dois números reais e, na sequência, um número inteiro. 
Se o número inteiro for 1 os dois números iniciais deverão ser somados, 
se for 2 eles serão subtraídos, se for 3 eles serão multiplicados e se for 4 serão divididos.
Mostrar mensagem de erro se o número inteiro não estiver na faixa de 1 a 4. Mostrar mensagem caso a divisão não seja possível. */ 

#include <stdio.h>

int main()
{
    float real1,real2,resultado;
    int opcao;
    
    printf("Digite o 1º número real:");
    scanf("%f",&real1);
    printf("Digite o 2º número real:");
    scanf("%f",&real2);
    printf("Escolha uma das opções abaixo:\n1-Para somar\n2-Para subtrair\n3-Para multiplicar\n4-Para dividir\n");
    scanf("%d",&opcao);
    
    if (opcao==1) 
    {
        resultado = real1 + real2;
        printf("A soma dos dois números é:%.2f\n",resultado);
    }
    else if (opcao==2)
    {
        resultado = real1 - real2;
        printf("A subtração dos dois números é:%.2f\n",resultado);
    }
    else if (opcao==3)
    {
        resultado = real1 * real2;
        printf("A multiplicação dos dois números é:%.2f\n",resultado);
    }
    else if (opcao==4)
    {
        if(real2!=0)
        {
        resultado = real1 / real2;
        printf("A divisão dos dois números é:%.2f\n",resultado);
        }
        else
        {
            printf("Não é possível dividir por zero\n");
        }
    }
    else
    {
        printf("Opção inválida\n");
    }
}
