#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

#include <strings.h>

#include "uteis.h"
 //PROTOTYPE
void calcularFatorial();
void parImpar();
void maiorConjunto();
void velhoNovo();
void somaPA();
//FUNÇÕES
int main() { //MENU
  setlocale(LC_ALL, "pt_BR.UTF-8");
  int opcao = 0;
  do {
    limpar();
    color(BHRED);
    printf("\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A    MENU \U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\n");
    color(BHBLU);
    println("\t1 -> Fatorial de um número                      ");
    println("\t2 -> Números pares/impares                      ");
    println("\t3 -> Maior número de um conjunto                ");
    println("\t4 -> Mais velho/novo                            ");
    println("\t5 -> Soma PA                                    ");
    println("\t0 -> Sair                                       ");
    println("\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A");
    printf(BHGRN "--> ");
    scanf("%i", & opcao);
    limpar();
    switch (opcao) {
    case 0:
      break;
    case 1:
      calcularFatorial();
      espera();
      break;
    case 2:
      parImpar();
      espera();
      break;
    case 3:
      maiorConjunto();
      espera();
      break;
    case 4:
      velhoNovo();
      espera();
      break;
    case 5:
      somaPA();
      espera();
      break;
    default:
      color(HYEL);
      printf("\U000026A0\U0000FE0F\tOpçao[ %i ] Inválida \U000026A0\U0000FE0F\n", opcao);
      espera();
      break;
    };
  } while (opcao != 0);
}
void calcularFatorial() {
  int numero, resultado;
  resultado = numero = 0;
  println("Digite um numero: ");
  printf("--> ");
  scanf("%d", & numero);
  for (resultado = 1; numero > 1; numero -= 1)
    resultado *= numero;
  color(BHYEL);
  printf("Resultado: %i \n", resultado);
}
void parImpar() {
  int par[11], impar[11], n, coutPar, countImpar;
  n = coutPar = countImpar = 0;
  for (int i = 0; i < 10; i++) {
    color(BHBLU);
    printf("Digite um numero(%i): \n", i + 1);
    color(BHGRN);
    scanf("%d", & n);
    if (n % 2 == 0) {
      par[coutPar] = n;
      coutPar += 1;
    } else if (n % 2 != 0) {
      impar[countImpar] = n;
      countImpar += 1;
    }
  }
  color(BHYEL);
  printf("São %i numeros pares e %i numeros impar.\nPAR: ", coutPar, countImpar);
  printvt(par, coutPar);
  printf("\nIMPAR: ");
  printvt(impar, countImpar);
  printf("\n");
}
void maiorConjunto() {
  int aux = 0;
  long a[512];
  char str[512];
  println("Digite um conjunto de numeros e user -1 para finalizar:");
  scanf("%s", str);
  char * temp = 0;
  char ** result = 0;
  int tamanho = 0;
  temp = strtok(str, ",");
  if (temp) {
    result = malloc((tamanho + 1) * sizeof(char ** ));
    result[tamanho++] = temp;
  }
  while ((temp = strtok(0, ",")) != 0) {
    result = realloc(result, (tamanho + 1) * sizeof(char ** ));
    result[tamanho++] = temp;
  }
  for (int i = 0; i < tamanho; i++) {
    a[i] = atol(result[i]);
  }
  if (tamanho > 0)
    free(result);
  if (a[tamanho - 1] == -1) {
    aux = a[0];
    for (int i = 1; i < tamanho; i++) {
      if (a[i] > aux) {
        aux = a[i];
      }
    }
    printf("Maior = %i\n", aux);
  }
}
void velhoNovo() {
  int idade[5], menor, maior;
  for (int i = 0; i < 5; i++) {
    printf("Digite a %i idade:", i + 1);
    scanf("%d", & idade[i]);

  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j <= i; j++) {
      if (idade[i] <= idade[j]) {
        maior = idade[i];
        idade[i] = idade[j];
        idade[j] = maior;
      }
    }
    for (int j = 0; j <= i; j++) {
      if (idade[i] >= idade[j]) {
        menor = idade[i];
        idade[i] = idade[j];
        idade[j] = menor;
      }
    }
  }
  printf("%i anos tem o mais velho.\n%i anos tem o mais novo\n", maior, menor);
}
void somaPA() {
  int razao, primeiroNumero, ultimoNumero;
  razao = primeiroNumero = ultimoNumero = 0;
  println("Digite a razao:");
  scanf("%d", & razao);
  println("Digite o primeiro numero:");
  scanf("%d", & primeiroNumero);
  println("Digite o ultimo numero:");
  scanf("%d", & ultimoNumero);
  while (primeiroNumero < ultimoNumero) {
    printf("%i,", primeiroNumero);
    primeiroNumero += razao;
  }
  printf("%i.\n", primeiroNumero);
}