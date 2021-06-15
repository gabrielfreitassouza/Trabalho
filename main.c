// GitHub: https://github.com/gabrielfreitassouza/Trabalho
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
        system("cls || clear");
        color(BHRED); // Trocar cor para vermelho
        printf("=================== MENU =========================\n");
        color(BHBLU); // Trocar cor para azul
        printf("\t1 -> Fatorial de um número                      \n");
        printf("\t2 -> Números pares/impares                      \n");
        printf("\t3 -> Maior número de um conjunto                \n");
        printf("\t4 -> Mais velho/novo                            \n");
        printf("\t5 -> Soma PA                                    \n");
        printf("\t0 -> Sair                                       \n");
        color(BHRED);
        printf("==================================================\n");
        printf(BHGRN "--> "); // Trocar cor para verde
        scanf("%i", & opcao);
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
                color(HYEL); // Trocar  cor para amarelo
                printf("\tOpçao[ %i ] Inválida\n", opcao);
                espera();
                break;
        };
    } while (opcao != 0);
}

void calcularFatorial() { // https://github.com/gabrielfreitassouza/Trabalho/#exerc%C3%ADcio-01
    int resultado, numero;
    resultado = numero = 0; // Iniciando as variaveis com valor 0
    system("cls || clear");
    printf("Digite um número: \n");
    scanf("%d", & numero);
    for (resultado = 1; numero > 1; numero -= 1)
        resultado *= numero; // Executando o cálculo fatorial para encontra o resultado
    printf("Resultado: %i \n", resultado);
}

void parImpar() { // https://github.com/gabrielfreitassouza/Trabalho/#exerc%C3%ADcio-02
    int par[11], impar[11], numero, contador[2];
    contador[0] = contador[1] = numero = 0; // Iniciando as variaveis com valor 0
    system("cls || clear");
    for (int i = 0; i < 10; i++) { // Solicitando os 10 números ao usuário
        printf("Digite um número(%i): \n", i + 1);
        scanf("%d", & numero);
        if (numero % 2 == 0) { // Verificar se numero é par e caso seja guardar no vetor par e adicionar 1 ao contador de números
            par[contador[0]] = numero;
            contador[0] += 1;
        } else if (numero % 2 != 0) { // Verificar se numero é impar e caso seja guardar no vetor impar e adicionar 1 ao contador de números
            impar[contador[1]] = numero;
            contador[1] += 1;
        }
    }
    system("cls || clear");
    if (contador[0] > 1 && contador[1] > 1) { // Verificar a quantidade de cada contador para mostrar a quantidade de números par e impar achado
        printf("\nSão %i números pares e %i números impar.\nPAR: ", contador[0], contador[1]);
    } else if (contador[0] > 1 && contador[1] == 1) {
        printf("São %i números pares e %i número impar.\nPAR: ", contador[0], contador[1]);
    } else if (contador[0] == 1 && contador[1] > 1) {
        printf("São %i número par e %i números impar.\nPAR: ", contador[0], contador[1]);
    }
    for (int i = 0; i < contador[0]; i++) { // Mostrar os números contidos no vetor par.
        printf("| %i | ", par[i]);
    }
    printf("\nIMPAR: ");
    for (int i = 0; i < contador[1]; i++) { // Mostrar os números contidos no vetor impar.
        printf("| %i | ", impar[i]);
    }
    printf("\n");
}

void maiorConjunto() { // https://github.com/gabrielfreitassouza/Trabalho/#exerc%C3%ADcio-03
    int aux;
    long a[512];
    char str[512];
    system("cls || clear");
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
}

void velhoNovo() { // https://github.com/gabrielfreitassouza/Trabalho/#exerc%C3%ADcio-04
    int idade[5], menor, maior;
    char ordem[5][10] = {
            "primeira",
            "segunda",
            "terceira",
            "quarta",
            "quinta"
    };
    system("cls || clear");
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
}

void somaPA() { // https://github.com/gabrielfreitassouza/Trabalho/#exerc%C3%ADcio-05
    int razao, primeiroNumero, ultimoNumero;
    razao = primeiroNumero = ultimoNumero = 0; // Iniciando as variaveis com valor 0
    system("cls || clear");
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
}