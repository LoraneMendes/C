#include <stdio.h>
#include<stdlib.h>

int main(){
    int x,y,*pt;
    x=10;
    //Altere um valor de uma variável de forma indireta (ponteiro)
    printf("\n___________________ Exercicio 1 ___________________\n\n");
    printf("Sem ponteiro, a variavel X eh: %d\n", x);
    pt=&x;

    *pt += 600;
    printf("Com ponteiro, a variavel X eh: %d\n",x);

    //Altere duas variáveis utilizando apenas um ponteiro
    printf("\n___________________ Exercicio 2 ___________________\n\n");
    x=10;
    y=20;
    printf("Sem ponteiro, a variavel X eh: %d e Y eh: %d\n", x,y);
    *pt += 100;
    pt=&x;

    y=x/y;
    *pt=y;
    printf("Com ponteiro, a variavel X eh: %d e Y eh: %d\n ",x,y);

    printf("\n___________________ Exercicio 3 ___________________\n\n");
    int *ptT;
    x=10;
    y=20;
    printf("ante da troca, x eh:  %d e Y eh: %d\n",x,y);
    ptT = x;
    x = y;
    y =ptT;
    printf("dps da troca X eh: %d eY eh: %d\n", x,y);

    return 0;
}
