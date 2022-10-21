//Dada um struct contendo idade, peso e nome, leia os dados teclado in�meras vezes, alocando um vetor din�micamente.
#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float peso;
} dados;

dados vet[2];

int main(){
    int i;
    int *p;
    p = malloc(sizeof(vet));


for(i=1; i<=10; i++) {
    //i = (cast-type*) malloc(byte-size);
    strcpy(vet[i].nome, " ");
    if(p==NULL){
        printf("erro no malloc");

    }

    vet[i].idade = 0;
    vet[i].peso = 0.0;
}


for(i=1; i<=10; i++) {
    printf("\nNome: ");
    scanf("%s%*c", &vet[i].nome);
    scanf("%s%*c,&p[i]");
    printf("\n '%s' esta no indice: '%d '  e antes estava em %d",vet[i].nome,p[i], vet[i].nome);
    printf("\nIdade: ");
    scanf("%d%*c", &vet[i].idade);
    printf("\n '%s' esta no indice: '%d '  e antes estava em %d",vet[i].idade,p[i], vet[i].idade);
    printf("\Peso: ");
    scanf("%f%*c", &vet[i].peso);
    printf("\n '%s' esta no indice: '%d '  e antes estava em %d",vet[i].peso,p[i], vet[i].peso);
}
free(p);
return 0;

}
