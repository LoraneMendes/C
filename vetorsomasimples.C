//Crie um vetor com 5 n�meros inteiros e apresente a soma e a m�dia dos elementos
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int total=0, vetor[5]={1,2,3,4,5},i;
    float media;

    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
    vetor[3] = 4;
    vetor[4] = 5;

    for (i=0;i<5;i++){
    total+= vetor[i];
    media=total/5;

    }
    printf("A soma eh: %d. A media eh: %.2f\n",total, media);

    return 0;

}
