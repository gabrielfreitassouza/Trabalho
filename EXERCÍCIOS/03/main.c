// Importação das bibliotecas necessárias
#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <locale.h> // Biblioteca para definir o local

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8"); // Definindo o local
  int aux;
  long a[512];
  char str[512];
  system("clear || cls");
  printf("Digite um conjunto de números e user -1 para finalizar:\n");
  scanf("%s", str);
  char * temp = 0;
  char ** result = 0;
  unsigned int tamanho = 0;
  temp = strtok(str, ",");
  if (temp) {
    result = malloc((tamanho + 1) * sizeof(char ** ));
    result[tamanho++] = temp;
  } // Aloca o número especificado de bytes 
  while ((temp = strtok(0, ",")) != 0) {
    result = realloc(result, (tamanho + 1) * sizeof(char ** ));
    result[tamanho++] = temp;
  } // Diminui o tamanho do bloco de memória especificado 
  for (int i = 0; i < tamanho; i++) {
    a[i] = atol(result[i]);
  } // Converter o vetor para inteiro
  if (tamanho > 0)
    free(result); // Libera memória de volta para o sistema 
  if (a[tamanho - 1] == -1) { // Verificar se o último número é -1
    aux = a[0];
    for (int i = 1; i < tamanho; i++) {
      if (a[i] > aux) {
        aux = a[i];
      }
    } // Procurar o maior número
    printf("Maior = %i\n", aux);
  }
  return EXIT_SUCCESS;
}
