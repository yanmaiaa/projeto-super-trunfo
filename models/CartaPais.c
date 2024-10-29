#include "cartaPais.h"
#include <stdio.h>
#include <string.h>

CartaPais criar_carta_pais(char *nome, int populacao, double area, double pib, double idh)
{
  CartaPais carta;
  strncpy(carta.nome, nome, sizeof(carta.nome) - 1);
  carta.populacao = populacao;
  carta.area = area;
  carta.pib = pib;
  carta.idh = idh;
  return carta;
}

void exibir_carta(CartaPais carta)
{
  printf("Pais: %s\n", carta.nome);
  printf("Populacao: %d milhoes\n", carta.populacao);
  printf("Area: %.2f mil quilometros quadrados\n", carta.area);
  printf("PIB: %.2f trilhoes\n", carta.pib);
  printf("IDH: %.2f\n", carta.idh);
}
