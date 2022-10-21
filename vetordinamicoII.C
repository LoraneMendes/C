//Dada um struct contendo idade, peso e nome, leia os dados teclado inúmeras vezes, alocando um vetor dinâmicamente.
#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float peso;
    float altura;
    float imc;
} dados;

dados vet[10];

int main(){
    int i;

for(i=0; i<=10; i++) {
    strcpy(vet[i].nome, " ");
    vet[i].idade = 0;
    vet[i].peso = 0.0;
    vet[i].altura = 0.0;
    vet[i].imc = 0.0;
}


for(i=0; i<10; i++) {
    printf("\nNome: ");
    scanf("%s%*c", &vet[i].nome);
    printf("Idade: ");
    scanf("%d%*c", &vet[i].idade);
    printf("Peso: ");
    scanf("%f%*c", &vet[i].peso);
    printf("Altura: ");
    scanf("%f%*c", &vet[i].altura);


    printf("IMC eh: %f",vet[i].peso/(vet[i].altura*vet[i].altura));
}

}
