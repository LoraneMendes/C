/*Um carro percorre um trajeto de 121km em 83 minutos, enquanto
o carro B percorre 345km em 4h:38min. Informe qual o carro mais
rapido.*/
#include <stdio.h>
int main()
{
    float tempo_carroA;
    float tempo_carroB;

    tempo_carroB = 121.0/(((4 * 60) + 38));
    tempo_carroA = 345/83.0;


    if(tempo_carroB<tempo_carroA)
    {
        printf("O carro que corre mais rapido e o carro B, com distancia media de  %.3f", tempo_carroB);
    }
    else
   {
        printf("O carro que corre mais rapido e o carro A, com distancia media de %.3f", tempo_carroA);
    }
}
