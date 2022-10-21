/*Dado as dimens�es de duas caixas (Altura, Largura e Profundidade), identifique a maior caixa*/
#include <stdio.h>
int main()
{
	float altura_c1, largura_c1, profundidade_c1, caixa1;
	float altura_c2, largura_c2, profundidade_c2, caixa2;

	printf("Digite a altura, largura e profundidade da caixa 1 em cm: ");
	scanf("%f %f %f", &altura_c1, &largura_c1, &profundidade_c1);
	printf("Digite a altura, largura e profundidade da caixa 2 em cm: ");
	scanf("%f %f %f", &altura_c2, &largura_c2, &profundidade_c2);

	caixa1 = (altura_c1*largura_c1)*profundidade_c1;
	caixa2 = (altura_c2*largura_c2)*profundidade_c2;

	if(caixa1>caixa2){
	    printf("A caixa 1 � maior");
	}
    else if(caixa1<caixa2){
        printf("A caixa 2 � maior");
    }
    else{
        printf("As caixas possuem as mesmsas dimensoes ou houve algum erro, tente novamente.");
    }
	return 0;
}
