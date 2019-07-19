/*Escreva um algoritmo em C que solicita ao usuário digitar 6 números para uma aposta na megasena. 
O algoritmo deve utilizar a estrutura do...while, gravar em variaveis distintas cada número que deve estar entre 1 e 60. 
Deve garantir que os 6 números são diferentes entre si e no final mostrar os números digitados */ 

#include <stdio.h>

int main()
{
    int aposta[6],i,temp,j,k;
    temp=0;
    
    do
    {
        printf("Digite o %dº número da aposta:",i+1);
        scanf("%d",&temp);
        if((temp>=1)&&(temp<=60))
        {
            if(i==0)
            {
                    aposta[i]=temp;
            }
            else
            { 
                j=0;
                while(j<i)
                {
                    if((aposta[j]==temp)) 
                    {
                        printf("Número repetido!\nDigite o %dº número novamente:",i+1);
                        scanf("%d",&temp);
                        j=0;
                    }
                    else if((temp<1)||(temp>60))
                    {
                        printf("Número da aposta não está entre 1 e 60!\nDigite o %dº número novamente:",i+1);
                        scanf("%d",&temp);
                        j=0;  
                    }
                    else
                    {
                        j++;
                    }
                }
                aposta[i]=temp;
            }
            i++;
        }
        else
        {
            printf("Número da aposta não está entre 1 e 60!\n");
        }
    }while(i<6);
    printf("\nOs números da aposta são:\n");
    do
    {
        printf("%d  ",aposta[k]);
        k++;
    }while(k<6);
    printf("\n");
}
