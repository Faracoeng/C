/*Implemente um algoritmo em C que solicita do usuário 10 números, após a leitura mostra ao usuários os números na ordem inversa em que foram digitados  */

#include <stdio.h>

int main()
{
	int n[10],i;

	for(i=0;i<10;i++)
	{
		printf("Digite o %dº número:",i+1);
		scanf("%d",&n[i]);
	}
	printf("Os números digitados na ordem inversa são:\n");
	for(i=9;i>=0;i--)
	{
		printf("%d\n",n[i]);
	}
}
