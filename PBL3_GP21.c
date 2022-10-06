/***************************************
PBL C3

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

  int n, t1, t2, tr;
  t1 = 0;
  t2 = 1;
  printf("Digite o elemento de Fibonacci que deseja saber: ");
  scanf("%d",&n);

  if (n<1){
    printf("Número inválido, saindo......");
  }else
    if(n>0){
        switch(n){
          case 1:
            printf("O 1° termo é %d",t1);
              break;
          case 2:
            printf("O 2° termo é %d",t2);
              break;
          default:
            for(int i = 1;i<=n-2;i++){
                tr = t1 + t2;
                t1 = t2;
                t2 = tr;
                //printf("%d\n",tr);
              }
          printf("O %d° termo é %d",n,tr);
        }  
    }
  return 0;
}
/*****************************************

  Exercício 2

*****************************************/
int exe2(void){

  int k;
  char ch,crip;
  printf("Digite um número inteiro: ");
  scanf("%d",&k);
  getchar();
  printf("Digite um caractere: ");
  ch = getchar();

  if (k == 1 || k == 2 ){
    crip = ch + 2;
    printf("%c\n",crip);
  }else
    if (k == 3){
      ch = ch + 5;
    }else
      if (k == 4){
        crip = ch - 2;
        printf("%c\n", crip); 
      }else{
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
              printf("Vogal\n");
            }else{
              printf("Consoante\n");
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