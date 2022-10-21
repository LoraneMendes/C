/*Dado o ano de nascimento, imprima a categoria do atleta de acordo com a tabela abaixo:
infantil = at� 15 anos
juvenil = 16 a 20 anos
adulto = >21*/
#include <stdio.h>
int main()
{
    int ano,idade;
    printf("Digite o ano de nascimento:");
    scanf("%d",&ano);
    idade=2019-ano;
    if(idade<=15)
    {
        printf("Categoria infantil");
    }
    else if(idade>=16&&idade<=20)
    {
        printf("Categoria juvenil");
    }
    else
    {
        printf("Categoria adulto");
    }

    return 0;
}
