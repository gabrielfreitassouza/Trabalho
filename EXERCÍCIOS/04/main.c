// Importação das bibliotecas necessárias
#include <stdio.h>

#include <stdlib.h>

int main() {
  int idade[5], menor, maior;
  char ordem[5][10] = {
    "primeira",
    "segunda",
    "terceira",
    "quarta",
    "quinta"
  };
  system("clear || cls");
  for (int i = 0; i < 5; i++) {
    printf("Digite a %s idade: ", ordem[i]);
    scanf("%d", & idade[i]);
  }
  for (int i = 0; i < 5; i++) { // Verificar quem é o mais velho
    for (int j = 0; j <= i; j++) {
      if (idade[i] <= idade[j]) {
        maior = idade[i];
        idade[i] = idade[j];
        idade[j] = maior;
      }
    }
    for (int j = 0; j <= i; j++) { // Verificar quem é o mais novo
      if (idade[i] >= idade[j]) {
        menor = idade[i];
        idade[i] = idade[j];
        idade[j] = menor;
      }
    }
  }
  printf("\n%i anos tem o mais velho.\n%i anos tem o mais novo\n", maior, menor);
  return EXIT_SUCCESS;
}
