/*O cliente deseja desenvolver um programa que seja inputado o c�digo de uma pe�a e o programa retorne o valor da compra e a comiss�o de 6% do vendedor, vide tabela abaixo:
cod500 = 33,12
cod700 = 21.05
cod236 = 5.23
cod 458 = 681.85 */
#include <stdio.h>
int main()
{
    int cod;

    printf("Digite o codigo do produto: ");
    scanf("%d",&cod);

    if(cod==500){
    printf("O valor da compra eh de R$33.12 e a comissao do vendedor eh de %.2f", 33.12*0.06);
    }
    else if(cod==700){
        printf("O valor da compra eh de R$21.05 e a comissao do vendedor eh de %.2f", 21.05*0.06);
    }
    else if(cod==458){
        printf("O valor da compra eh de R$681.85 e a comissao do vendedor eh de %.2f", 681.85*0.06);
    }
    else{
        printf("O valor da compra eh de R$5.23 e a comissao do vendedor eh de %.2f", 5.23*0.06);
    }
    return 0;
}








