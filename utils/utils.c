#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ler_inteiro(const char *mensagem)
{
  int valor;
  printf("%s", mensagem);
  scanf("%d", &valor);
  getchar(); // Limpa o buffer
  return valor;
}

double ler_double(const char *mensagem)
{
  double valor;
  printf("%s", mensagem);
  scanf("%lf", &valor);
  getchar(); // Limpa o buffer
  return valor;
}

void ler_string(char *buffer, int tamanho)
{
  fgets(buffer, tamanho, stdin);
  buffer[strcspn(buffer, "\n")] = '\0'; // Remove o nova linha
}
