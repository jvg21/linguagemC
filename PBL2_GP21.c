/***************************************
PBL C2

Grupo 21
Nome:João Vitor Gregorini
Nome:João Victor Ribeiro Basso
Nome:Giovanni Lucca Reque Uchôa
Nome: Bruno Renan Guttervill
*****************************************/
/*****************************************

  Exercício 1

*****************************************/
#include <stdio.h>
#include <stdlib.h>

int exe1(){

  int aux = 0, vogais = 0, consoantes = 0, x;
  char c[2];
  int nvgs[10]= {65,69,73,79,85,97,101,105,111,117};
  
  while(aux == 0){
    printf("\nDigite um caractere:");
    scanf("%s",c);

    //printf("Você digitou: %d",c[0]);
    
    if (c[0] == 48){
      printf("\nSaindo ... ");
      printf("\nVogais: %d, Consoantes: %d",vogais,consoantes);
      aux = 1;
    }else
    if ((65<=c[0] && c[0]<=90)||(97<=c[0] && c[0]<=122)){
      x = 0;
        for(int i = 0;i < 10; i++){
          if(c[0] == nvgs[i]){
            vogais += 1;
            x = 1;
            printf("Vogal\n");
          }
        }  
        if(x == 0){
          consoantes += 1;
          printf("Consoante\n");
        }
    }else{
      printf("Caractere inválido\n");
    }
    }
    
  return 0;
}
/*****************************************

  Exercício 2

*****************************************/
int exe2(void){

 int lim_inf, lim_sup, tentativas = 0;

  printf("\nLimite inferior: ");
  scanf("%d", &lim_inf);

  printf("Limite superior: ");
  scanf("%d", &lim_sup);

  while (lim_inf >= lim_sup) {

    tentativas++;

    if (tentativas == 3) {

      printf("\nPrograma encerrado. Limite de tentativas excedido.");
      exit(0);
    }

    if (lim_inf > lim_sup) {

      printf("\n*Limite inferior maior que o superior, tente novamente.*\n");

    } else if (lim_inf == lim_sup) {

      printf("\n*Limite inferior igual ao superior, tente novamente.*\n");
    }

    printf("\nLimite inferior: ");
    scanf("%d", &lim_inf);

    printf("Limite superior: ");
    scanf("%d", &lim_sup);
  }

  printf("\n---Múltiplos de 3:---\n\n");
  int j = 0;
  for (int i = lim_inf; i <= lim_sup; i++) {

    if (i % 3 == 0) {

      j++;

      printf(" [%d]", i);

      if (j % 4 == 0) {
        printf("\n\n");
      }
    }
  }
  return 0;
}
/*****************************************

   MAIN

*****************************************/
int main(void) {
  int x;
  printf("[1]exe1 [2]exe2 [0]sair:");
  scanf("%d",&x);
  putchar(x);

  switch(x){
    case 1:
      exe1();
      break;
    
    case 2: 
      exe2();
      break;

    default:
      printf("Saindo.......");
      break;
  }
}