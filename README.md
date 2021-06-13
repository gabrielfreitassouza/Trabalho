# TRABALHO
[![](https://raw.githubusercontent.com/gabrielfreitassouza/Trabalho/master/IMAGENS/wp3295258-_1_-_2_.webp)](https://wallpapercave.com/wp/wp3295258.png)
#### main.c
```c
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
    color(BHBLU);
    println("Digite um numero: ");
    color(BHGRN);
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
    color(BHBLU);
    println("Digite um conjunto de numeros e user -1 para finalizar:");
    color(BHGRN);
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
        color(BHYEL);
        printf("Maior = %i\n", aux);
    }
}

void velhoNovo() {
    int idade[5], menor, maior;
    for (int i = 0; i < 5; i++) {
        color(BHBLU);
        printf("Digite a %i idade:", i + 1);
        color(BHGRN);
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
    color(BHYEL);
    printf("%i anos tem o mais velho.\n%i anos tem o mais novo\n", maior, menor);
}

void somaPA() {
    int razao, primeiroNumero, ultimoNumero;
    razao = primeiroNumero = ultimoNumero = 0;
    color(BHBLU);
    printf("Digite a razao:\n");
    color(BHGRN);
    scanf("%d", & razao);
    color(BHBLU);
    printf("Digite o primeiro numero:\n");
    color(BHGRN);
    scanf("%d", & primeiroNumero);
    color(BHBLU);
    printf("Digite o ultimo numero:\n");
    scanf("%d", & ultimoNumero);
    while (primeiroNumero < ultimoNumero) {
        printf("%i,", primeiroNumero);
        primeiroNumero += razao;
    }
    printf("%i.\n", primeiroNumero);
}
```
#### uteis.h
```c
//Regular text
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

//Regular bold text
#define BBLK "\e[1;30m"
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BYEL "\e[1;33m"
#define BBLU "\e[1;34m"
#define BMAG "\e[1;35m"
#define BCYN "\e[1;36m"
#define BWHT "\e[1;37m"

//Regular underline text
#define UBLK "\e[4;30m"
#define URED "\e[4;31m"
#define UGRN "\e[4;32m"
#define UYEL "\e[4;33m"
#define UBLU "\e[4;34m"
#define UMAG "\e[4;35m"
#define UCYN "\e[4;36m"
#define UWHT "\e[4;37m"

//Regular background
#define BLKB "\e[40m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YELB "\e[43m"
#define BLUB "\e[44m"
#define MAGB "\e[45m"
#define CYNB "\e[46m"
#define WHTB "\e[47m"

//High intensty background 
#define BLKHB "\e[0;100m"
#define REDHB "\e[0;101m"
#define GRNHB "\e[0;102m"
#define YELHB "\e[0;103m"
#define BLUHB "\e[0;104m"
#define MAGHB "\e[0;105m"
#define CYNHB "\e[0;106m"
#define WHTHB "\e[0;107m"

//High intensty text
#define HBLK "\e[0;90m"
#define HRED "\e[0;91m"
#define HGRN "\e[0;92m"
#define HYEL "\e[0;93m"
#define HBLU "\e[0;94m"
#define HMAG "\e[0;95m"
#define HCYN "\e[0;96m"
#define HWHT "\e[0;97m"

//Bold high intensity text
#define BHBLK "\e[1;90m"
#define BHRED "\e[1;91m"
#define BHGRN "\e[1;92m"
#define BHYEL "\e[1;93m"
#define BHBLU "\e[1;94m"
#define BHMAG "\e[1;95m"
#define BHCYN "\e[1;96m"
#define BHWHT "\e[1;97m"

//Reset
#define reset "\e[0m"

//Trocar cor
void color(char color[8]) {
    printf(color);
}

void espera() {
    color(HRED);
    printf("Precione ENTER para continuar...", getchar());
    getchar();
}

void println(char * texto) {
    printf("%s\n", texto);
}

void limpar() {
    system("cls || clear");
}

void printvt(int * vet, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("| %i | ", vet[i]);
    }
}
```
#### SAIDA MENU 
[![](https://github.com/gabrielfreitassouza/Trabalho/blob/master/IMAGENS/MENU.png?raw=true)](https://github.com/gabrielfreitassouza/Trabalho/blob/master/IMAGENS/MENU.png?raw=true)

[EXECUTAR CÓDIGO](https://replit.com/@gabrielfreitass/Trabalho "EXECUTAR CÓDIGO")
## LISTAS DE EXERCÍCIOS 
1. Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário.

2. Faça um programa que receba 10 números inteiros e mostre a quantidade de números pares e a quantidade de números impares.

3.  Faça um algoritmo que leia um conjunto de números inteiros positivos e imprima o maior dentre eles. Admita que o usuário deve informar o valor -1 para finalizar o conjunto de números. (Ex.: 5, 102, 3, -1 Maior = 102).

4. Construa um algoritmo que receba 5 idades distintas e informe a idade do mais velho e a do mais novo.

5. Leia a razão de uma PA (Progressão Aritmética) e o seu primeiro e último termos e informe a soma dos elementos dessa PA.

## RESOLUÇÃO DOS EXERCÍCIOS 
#### EXERCÍCIO 01
###### CODIGO
```c
void calcularFatorial() {
    int numero, resultado; 
    resultado = numero = 0;  // Iniciar as variaveis com valor  = 0
    color(BHBLU); // Trocar a cor da letra do terminal para azul
    println("Digite um numero: "); 
    color(BHGRN); // Trocar a cor da letra do terminal para verde
    printf("--> ");
    scanf("%d", & numero);
    for (resultado = 1; numero > 1; numero -= 1)
        resultado *= numero; // Realizar o Calcular Fatorial  
    color(BHYEL);  // Trocar a cor da letra do terminal para amarelo
    printf("Resultado: %i \n", resultado);
}
```
###### SAIDA
[![](https://github.com/gabrielfreitassouza/Trabalho/blob/master/IMAGENS/01.png?raw=true)](https://github.com/gabrielfreitassouza/Trabalho/blob/master/IMAGENS/01.png?raw=true)





