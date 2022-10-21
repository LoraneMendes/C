struct cad cadastro2(struct cad *vet, int tam)

{

  struct cad c;

  int i;

  printf("Digite a qtd: \n");

  scanf("%d",&c.codigo);
  

  for(i=0;i<tam;i++)
  {
    if(c.codigo == vet[i].codigo)
    {
      printf("codigo repetido");
      c.codigo = -1;

    }
  }

  return c;
}

int main(){
  struct cad *vet, c;
  int n;
  n=0;
  vet = NULL;
  c = cadastro2(); 
  //if(c.codigo > 0)
  if(n==0)

  {
    vet = (struct cad ;) malloc (1*sizeof(struct cad));
    n+=1;
  }
  else{
    n+=1;
    vet = (struct cad ;) realloc (vet,n*sizeof(struct cad));     
  }
  vet[n-1] = c;   
  printf("Qtd: %d\n",vet[n-1].qtd);
  return 0;

}
