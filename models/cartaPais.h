#ifndef CARTA_PAIS_H
#define CARTA_PAIS_H

typedef struct
{
  char nome[50];
  int populacao; 
  double area;   
  double pib;    
  double idh;    
} CartaPais;

CartaPais criar_carta_pais(char *nome, int populacao, double area, double pib, double idh);
void exibir_carta(CartaPais carta);

#endif
