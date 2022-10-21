/*Sendo dois produtos:
Identificar o produto mais caro
Identificar o produro mais barato*/
#include <stdio.h>
int main()
{
	float prd_um, prd_dois;

	printf("Digite o preco de 2 produtos:");
	scanf("%f %f",&prd_um, &prd_dois);

	if(prd_um>prd_dois){
	    printf("Produto 1 eh mais caro e o 2 eh o mais barato.");
	}
	else if(prd_um<prd_dois){
	    printf("Produto 2 eh mais caro e o 1 eh o mais barato.");
	}
	else{
	    ("Ou os precos sao iguais ou vc digitou algum caractere indevido. Tente novamente.");
	}

	return 0;
}
