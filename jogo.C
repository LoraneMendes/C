#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
  char time_casa[100];
  int gols_casa;

  int gols_visitante;
  char time_visitante[100]; 

}Partidas;

Partidas * ler_arquivo(int *tam)
{
    FILE *fp;
    char path[100];
    Partidas *p;
    int nPartidas = 0,i=0;
    
    printf("Bem vindo ao Programa!\n");
    printf("Digite o nome do arquivo a ser carregado: ");
    fflush(stdin);
    scanf("%s",path);
    
    fp = fopen(path,"r");
    
    if(fp == NULL)
    {
        printf("Arquivo nÃ£o %s nÃ£o encontrado\n",path);
        return NULL;
    }
    
    //Recupero o numero de partidas que deve estar na primeira linha
    fscanf(fp,"%*s %d\n",&nPartidas);
    *tam = nPartidas;
    
    //Aloco o vetor de partidas dinamicamente
    p = (Partidas *) malloc (nPartidas*sizeof(Partidas));
    
    i=0;
    //Leio as partidas
    while(!feof(fp))
    {
        fscanf(fp,"%[^,],%d,%d,%s\n",p[i].time_casa,&p[i].gols_casa,&p[i].gols_visitante,p[i].time_visitante);        
        i++;
    }
    
    
    return p;
}



//Total de gols marcados
//Quantidade de Empates
//Quantidade de jogos em que o visitante venceu
//Quantidade de jogos em que time da casa venceu
//Jogo com a maior quantidade de gols
void estatisticas_gerais(Partidas *p, int nPartidas)
{
  int vit_casa, vit_visitante, gols, empates, idx, i,maior_goleada;
  char path[100];
  FILE *fp;
  
  vit_casa=0;
  vit_visitante=0;
  gols=0;
  empates=0;
  idx=0;
  maior_goleada = 0;
  
  //Percorro todo o vetor computando as estatisticas
  for(i=0;i<nPartidas;i++)
  {
     //Se o time da casa fez mais gols, entao vitoria da casa
     if(p[i].gols_casa > p[i].gols_visitante){
            vit_casa++;
     } 
     //Se foi o visitante
     else if(p[i].gols_casa < p[i].gols_visitante){
        vit_visitante++;
     }
     //Senao e empate
     else{
        empates++;
     }
    
    
     //Total de gols
     gols += p[i].gols_casa + p[i].gols_visitante;
    
     //Qual foi o jogo com mais gols
     if ( p[i].gols_casa + p[i].gols_visitante > maior_goleada)
     {
         idx = i;
         maior_goleada = p[i].gols_casa + p[i].gols_visitante;
     }
  }
  
  //Imprimo na tela
  printf("Total Vitorias do Time da Casa: %d\n",vit_casa);
  printf("Total Vitorias do Time Visitante: %d\n",vit_visitante);
  printf("Total de Empates: %d\n",empates);
  printf("Total de Gols: %d\n",gols);
  printf("Maior Goleada: %s %d x %d %s\n",p[idx].time_casa,p[idx].gols_casa,
            p[idx].gols_visitante,p[idx].time_visitante);
            
  //Salvo em arquivo
  printf("Digite o nome do relatorio a ser salvo: ");
  fflush(stdin);
  scanf("%s",path);
  
  fp = fopen(path,"w+");
  fprintf(fp,"Total Vitorias do Time da Casa: %d\n",vit_casa);
  fprintf(fp,"Total Vitorias do Time Visitante: %d\n",vit_visitante);
  fprintf(fp,"Total de Empates: %d\n",empates);
  fprintf(fp,"Total de Gols: %d\n",gols);
  fprintf(fp,"Maior Goleada: %s %d x %d %s\n",p[idx].time_casa,p[idx].gols_casa,
            p[idx].gols_visitante,p[idx].time_visitante);
  fclose(fp);
  
  
}

//Gols Marcados e Gols Sofridos
//VitÃ³rias, Empates, Derrotas
void estatisticas_time(Partidas *p, int nPartidas)
{
  int v,e,d; //Vitoria, empate, derrota
  int gm,gs; //gols marcados e sofridos
  int i;
  char path[100],time[100];
  FILE *fp;
  
  v=0;
  e=0;
  d=0;
  gm=0;
  gs=0;
  
  printf("Qual time deseja pesquisar: ");
  fflush(stdin);
  scanf("%s",time);
  
  //Percorro todo o vetor computando as estatisticas
  for(i=0;i<nPartidas;i++)
  {
     //verifico o resultado baseado se ele jogou em casa ou fora 
     printf("%s %s\n",time,p[i].time_casa);
     //Se jogou em casa
     if(strcmp(time,p[i].time_casa) == 0)     
     {
        //Em caso de vitoria, o time da casa fez mais gols        
        if(p[i].gols_casa > p[i].gols_visitante){
            v++;            
        }         
        else if(p[i].gols_casa < p[i].gols_visitante){
            d++;
        }     
        else{
            e++;
        }    
        
        //Gols do time da casa == gols marcados
        gm += p[i].gols_casa; 
        gs += p[i].gols_visitante;
    }
    //Se jogou como visitante
    else if(strcmp(time,p[i].time_visitante) == 0)     
     {
         //Em caso de vitoria, o time visitante fez mais gols
        if(p[i].gols_casa < p[i].gols_visitante){
            v++;
        }         
        else if(p[i].gols_casa > p[i].gols_visitante){
            d++;
        }     
        else{
            e++;
        }
        
        //Gols do time visitante == gols marcados
        gm += p[i].gols_visitante; 
        gs += p[i].gols_casa;    
    }
     
  }
  
  //Imprimo na tela
  printf("Total Vitorias, Empate, Derrotas: %d, %d, %d\n",v,e,d);
  printf("Gols Marcados e Sofridos: %d, %d\n",gm,gs);
              
  //Salvo em arquivo
  printf("Digite o nome do relatorio a ser salvo: ");
  scanf("%s",path);
  
  fp = fopen(path,"w+");
  fprintf(fp,"Total Vitorias, Empate, Derrotas: %d, %d, %d\n",v,e,d);
  fprintf(fp,"Gols Marcados e Sofridos: %d, %d\n",gm,gs);
  fclose(fp);
}


int main()
{
    int nPartidas=0;
    int opc=0;
    Partidas *p;
    
    p = ler_arquivo(&nPartidas);    
    if(p == NULL)
    {
        printf("Erro ao recuperar dados. Saindo\n");
        return 0;
    }
    printf("Total Lido: %d\n",nPartidas);
    
    while(opc != 3)
    {
        printf("1. Computar EstatÃ­sticas Gerais\n");
        printf("2. Computar EstatÃ­sticas Time\n");
        printf("3. Sair\n");
        printf("Digite a opcao: ");
        fflush(stdin);
        scanf("%d",&opc);
        
        switch(opc)
        {
            case 1:
                estatisticas_gerais(p,nPartidas);
                break;
            case 2:
                estatisticas_time(p,nPartidas);
                break;
        }
    }
}
