#include "jogoSuperTrunfo.h"
#include "../models/CartaPais.h"
#include "../utils/utils.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_CARTAS 100

CartaPais cartas[MAX_CARTAS];
int total_cartas = 0;

void cadastrar_carta()
{
  char nome[50];
  int populacao;
  double area, pib, idh;

  printf("Nome do Pais: ");
  ler_string(nome, sizeof(nome));

  populacao = ler_inteiro("Populacao (em milhoes): ");
  area = ler_double("Area (em mil quilometros quadrados): ");
  pib = ler_double("PIB (em trilhoes de dolares): ");
  idh = ler_double("IDH (de 0 a 1): ");

  CartaPais carta = criar_carta_pais(nome, populacao, area, pib, idh);
  if (total_cartas < MAX_CARTAS)
  {
    cartas[total_cartas++] = carta;
    printf("Carta cadastrada com sucesso!\n\n");
  }
  else
  {
    printf("Erro: limite de cartas atingido.\n");
  }
}

void listar_cartas()
{
  printf("Cartas Cadastradas:\n");
  for (int i = 0; i < total_cartas; i++)
  {
    exibir_carta(cartas[i]);
    printf("\n");
  }
}

void iniciar_jogo()
{
  int opcao;
  while (1)
  {
    printf("Bem-vindo ao Super Trunfo de Paises!\n");
    printf("1. Cadastrar nova carta\n");
    printf("2. Listar cartas cadastradas\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");

    opcao = ler_inteiro("");

    switch (opcao)
    {
    case 1:
      cadastrar_carta();
      break;
    case 2:
      listar_cartas();
      break;
    case 3:
      printf("Saindo do jogo...\n");
      return;
    default:
      printf("Opção invalida. Tente novamente.\n");
      break;
    }
  }
}
