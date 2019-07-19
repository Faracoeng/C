/*Implemente um programa em C que recebe duas datas fornecidas pelo usuário 
(três números inteiros cada: dia, mês e ano com 4 dígitos). 
Deve ser calculada qual a maior data e exibi-la em tela 
(pesquise sobre if...else para resolver este problema) */ 

#include <stdio.h>

int main()
{
    int d1,d2,m1,m2,a1,a2;
    
    printf("Digite a 1ª data no formato (DD/MM/AAAA):\n");
    scanf("%d/%d/%d",&d1,&m1,&a1);
    printf("Digite a 2ª data no formato (DD/MM/AAAA):\n");
    scanf("%d/%d/%d",&d2,&m2,&a2);

    
    if (a1>a2) 
    {
        printf("A maior data é %d/%d/%d\n",d1,m1,a1);
    }
    else if (a2>a1)
    {
        printf("A maior data é %d/%d/%d\n",d2,m2,a2);
    }
    else
    {
        if (m1>m2)
        {
            printf("A maior data é %d/%d/%d\n",d1,m1,a1);    
        }
        else if (m2>m1)
        {
            printf("A maior data é %d/%d/%d\n",d2,m2,a2);
        }
        else
        {
            if (d1>d2)
            {
                printf("A maior data é %d/%d/%d\n",d1,m1,a1);
            }
            else if(d2>d1)
            {
                printf("A maior data é %d/%d/%d\n",d2,m2,a2);
            }
            else printf("As datas são iguais\n");
        }
    }
}
