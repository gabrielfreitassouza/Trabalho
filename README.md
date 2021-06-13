# TRABALHO
[![](https://raw.githubusercontent.com/gabrielfreitassouza/Trabalho/master/IMAGENS/wp3295258-_1_-_2_.webp)](https://wallpapercave.com/wp/wp3295258.png)

## LISTAS DE EXERCÍCIOS 
[1. Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário.](https://github.com/gabrielfreitassouza/Trabalho/#exerc%C3%ADcio-01 "1. Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário.")

2. Faça um programa que receba 10 números inteiros e mostre a quantidade de números pares e a quantidade de números impares.

3.  Faça um algoritmo que leia um conjunto de números inteiros positivos e imprima o maior dentre eles. Admita que o usuário deve informar o valor -1 para finalizar o conjunto de números. (Ex.: 5, 102, 3, -1 Maior = 102).

4. Construa um algoritmo que receba 5 idades distintas e informe a idade do mais velho e a do mais novo.

5. Leia a razão de uma PA (Progressão Aritmética) e o seu primeiro e último termos e informe a soma dos elementos dessa PA.

## RESOLUÇÃO DOS EXERCÍCIOS 
#### EXERCÍCIO 01
###### LÓGICA
1. Primeiramente o programa dever pedir o número para o usuário.

2. Depois disso o programa dever realizar o cálculo fatorial para a achar o resultado.

3. O resultado é obtido a partir da multiplicação de todos os seus antecessores  até o número um.

4. Retornar o resultado para o usuário.

###### CÓDIGO
```c
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
```
###### SAÍDA
[![](https://github.com/gabrielfreitassouza/Trabalho/blob/master/IMAGENS/01EX.png?raw=true)](https://github.com/gabrielfreitassouza/Trabalho/blob/master/IMAGENS/01EX.png?raw=true)

[EXECUTAR CÓDIGO](https://replit.com/@gabrielfreitass/TB02EXERCICIO1 "EXECUTAR CÓDIGO")
