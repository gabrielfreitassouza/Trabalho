// Importação das bibliotecas necessárias
#include <stdio.h>

#include <stdlib.h>

#include <locale.h> // Biblioteca para definir o local

int main() {
  int razao, primeiroNumero, ultimoNumero;
  razao = primeiroNumero = ultimoNumero = 0; // Iniciando as variaveis com valor 0
  system("clear || cls");
  printf("Digite a razao:\n");
  scanf("%d", & razao);
  printf("Digite o primeiro numero:\n");
  scanf("%d", & primeiroNumero);
  printf("Digite o ultimo numero:\n");
  scanf("%d", & ultimoNumero);
  while (primeiroNumero < ultimoNumero) {
    printf("%i,", primeiroNumero);
    primeiroNumero += razao;
  } // Exercutar o calculo
  printf("%i.\n", primeiroNumero);
  return EXIT_SUCCESS;
}
