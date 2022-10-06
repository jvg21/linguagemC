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
#include <string.h>

const int NUM_MESES = 12;
const int NUM_PINTORES = 20;
int user_mes, cont_list = 0, cont_meses = 0;

enum Mes { JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ };

char *mes_str[NUM_MESES] = {"janeiro",  "fevereiro", "março",    "abril",
                            "maio",     "junho",     "julho",    "agosto",
                            "setembro", "outubro",   "novembro", "dezembro"};

struct Pessoa {
  char nome[50];
  enum Mes mes; // mês de aniversário
};

int main() {
  struct Pessoa pintor[NUM_PINTORES];
  pintor[0].mes = JAN;
  strcpy(pintor[0].nome, "Leonardo da Vinci");
  pintor[1].mes = ABR;
  strcpy(pintor[1].nome, "Sandro Botticelli");
  pintor[2].mes = AGO;
  strcpy(pintor[2].nome, "Georges Seurat");
  pintor[3].mes = ABR;
  strcpy(pintor[3].nome, "Vincent van Gogh");
  pintor[4].mes = SET;
  strcpy(pintor[4].nome, "Paul Gauguin");
  pintor[5].mes = JUN;
  strcpy(pintor[5].nome, "Edouard Manet");
  pintor[6].mes = OUT;
  strcpy(pintor[6].nome, "Paul Cezanne");
  pintor[7].mes = JUN;
  strcpy(pintor[7].nome, "Auguste Renoir");
  pintor[8].mes = JUN;
  strcpy(pintor[8].nome, "Claude Monet");
  pintor[9].mes = AGO;
  strcpy(pintor[9].nome, "Pablo Picasso");
  pintor[10].mes = DEZ;
  strcpy(pintor[10].nome, "Edgar Degas");
  pintor[11].mes = ABR;
  strcpy(pintor[11].nome, "Edvard Munch");
  pintor[12].mes = JAN;
  strcpy(pintor[12].nome, "Michelangelo Merisi");
  pintor[13].mes = JAN;
  strcpy(pintor[13].nome, "Michelangelo Buonarroti");
  pintor[14].mes = SET;
  strcpy(pintor[14].nome, "Tarsila do Amaral");
  pintor[15].mes = AGO;
  strcpy(pintor[15].nome, "Gustav Klimt");
  pintor[16].mes = NOV;
  strcpy(pintor[16].nome, "Rembrandt van Rijn");
  pintor[17].mes = MAI;
  strcpy(pintor[17].nome, "Amedeo Modigliani");
  pintor[18].mes = SET;
  strcpy(pintor[18].nome, "Caillebotte");
  pintor[19].mes = SET;
  strcpy(pintor[19].nome, "Joseph Turner");

  printf("Meses para pesquisa:\n");
  for (int i = 0; i < NUM_MESES; i++) {
    if (cont_meses < 9) {
      printf("[ %d] %s\n", cont_meses + 1, mes_str[i]);
      cont_meses++;
    } else {
      printf("[%d] %s\n", cont_meses + 1, mes_str[i]);
      cont_meses++;
    }
  }

  printf("\nEscolha um mês pelo seu número: ");
  scanf("%d", &user_mes);
  if (user_mes > 12) {
    printf("\nEscolha inválida!");
    exit(0);
  }
  printf("\nPintores nascidos no mês de %s:\n", mes_str[user_mes - 1]);

  for (int j = 0; j < NUM_PINTORES; j++) {
    if (pintor[j].mes == user_mes - 1) {
      cont_list++;
      printf("[%d] %s\n", cont_list, pintor[j].nome);
    }
  }

  if (cont_list > 1) {
    printf("\n==> %d pintores foram encontrados.", cont_list);
  } else if (cont_list == 1) {
    printf("\n==> Apenas %d pintor foi encontrado.", cont_list);
  } else if (cont_list == 0) {
    printf("\n==> Nenhum pintor foi encontrado.");
  }

  return 0;
}
