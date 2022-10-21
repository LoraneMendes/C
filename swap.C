// Implemente uma fun��o que faz a troca duas v�riaveis
#include <stdio.h>

void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

int main()
{
    int x,y;
    x= 10;
    y=20;
    printf("Antes da troca, X eh: %d e Y eh:: %d\n",x,y);
    swap(&x,&y);
    printf("Depois da troca, X eh: %d e Y eh: %d\n",x,y);

    return 0;
}
