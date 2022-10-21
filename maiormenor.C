/*Sendo dois produtos:
Identificar o produto mais caro
Identificar o produro mais barato
*/
#include <stdio.h>
int main()
{
	float precoU, floar precoD;
	printf("Digite o preco de 2 produtos:");
	scanf("%d",&precoU,&precoD);

	if(precoU>precoD){
	    printf("Produto 1 eh mais caro");
	}
	else if(precoU<precoD){
	    printf("Produto 2 eh mais caro")
	}
	else("Ou os precos sao iguais ou vc digitou algum caractere indevido. Tente novamente.")



	return 0;
}
