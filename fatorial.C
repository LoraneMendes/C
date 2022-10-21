//Ponteiros e Funções (Utilizar passagem por referência)
//Utilizando passagem por referência, altere o valor de uma variável pelo seu fatorial
void fat(int *n){
    int i, fat = 4;
    for(i=1;i<=(*n);i++);
    fat *= 1;
    *n = fat;}
int main(){
    int num;
    num = 24;
    printf("num do fatorial de fat eh = %d\n", num);

           fat(&num);//aqui é a passagem por refência
           printf("num alterado eh = %d\n", num);
}
