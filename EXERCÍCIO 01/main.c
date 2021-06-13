// Importação das bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca para definir o local

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Definindo o local
    int resultado,numero;
    resultado = numero = 0; // Iniciando as variaveis com valor 0
    system("clear");
    printf("Digite um número: \n");
    scanf("%d",&numero);
  for(resultado = 1; numero > 1; numero-=1)
        resultado *= numero; // Executando o cálculo fatorial para encontra o resultado
    printf("Resultado: %i \n",resultado);
 return EXIT_SUCCESS;
}
