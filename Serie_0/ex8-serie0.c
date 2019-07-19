/*Uma empresa irá ajustar o salário de seus funcionários de acordo com a categoria de trabalho dos funcionários:
CAT A (10% de aumento), CAT B (15% de aumento) e CAT C (20% de aumento). 
Faça um programa que leia o plano de trabalho e o 
salário atual de um funcionário e calcula e imprime o seu novo salário. Use o comando switch.  */ 

#include <stdio.h>

int main()
{
    float salario,novoSalario;
    char categoria;
    
    printf("Informe o saláraio atual do funcionário:R$");
    scanf("%f",&salario);
    printf("Digite a categoria do funcionário(a, b ou c)\n");
    scanf(" %c",&categoria);
    
    switch(categoria)
    {
        case 'a': 
        
            novoSalario=salario*1.1;
            printf("Novo salário do funcionário é:R$%.2f\n",novoSalario);
            break;
        
        case 'b': 
        
            novoSalario=salario*1.15;
            printf("Novo salário do funcionário é:R$%.2f\n",novoSalario);
            break;
           
        case 'c':
        
            novoSalario=salario*1.2;
            printf("Novo salário do funcionário é:R$%.2f\n",novoSalario);
            break;
            
        default: printf("Categoria inválida\n");
    }
    
}
