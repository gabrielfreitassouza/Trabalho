# TRABALHO
[![](https://raw.githubusercontent.com/gabrielfreitassouza/Trabalho/master/IMAGENS/wp3295258-_1_-_2_.webp)](https://wallpapercave.com/wp/wp3295258.png)

## LISTAS DE EXERCÍCIOS 
[1. Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário.](https://github.com/gabrielfreitassouza/Trabalho/#exerc%C3%ADcio-01 "1. Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário.")

[2. Faça um programa que receba 10 números inteiros e mostre a quantidade de números pares e a quantidade de números impares.](https://github.com/gabrielfreitassouza/Trabalho/#exerc%C3%ADcio-02 "2. Faça um programa que receba 10 números inteiros e mostre a quantidade de números pares e a quantidade de números impares.")

3.  Faça um algoritmo que leia um conjunto de números inteiros positivos e imprima o maior dentre eles. Admita que o usuário deve informar o valor -1 para finalizar o conjunto de números. (Ex.: 5, 102, 3, -1 Maior = 102).

4. Construa um algoritmo que receba 5 idades distintas e informe a idade do mais velho e a do mais novo.

5. Leia a razão de uma PA (Progressão Aritmética) e o seu primeiro e último termos e informe a soma dos elementos dessa PA.

## RESOLUÇÃO DOS EXERCÍCIOS 
#### EXERCÍCIO 01
###### LÓGICA 01
1. Primeiramente o programa dever pedir o número para o usuário.

2. Depois disso o programa dever realizar o cálculo fatorial para a achar o resultado.

3. O resultado é obtido a partir da multiplicação de todos os seus antecessores  até o número um.

4. Retornar o resultado para o usuário.

###### CÓDIGO 01
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
###### EXEMPLO DE SAÍDA 01
[![](https://github.com/gabrielfreitassouza/Trabalho/blob/master/IMAGENS/01EX.png?raw=true)](https://github.com/gabrielfreitassouza/Trabalho/blob/master/IMAGENS/01EX.png?raw=true)

[EXECUTAR CÓDIGO](https://replit.com/@gabrielfreitass/TB02EXERCICIO1 "EXECUTAR CÓDIGO")

#### EXERCÍCIO 02
###### LÓGICA 02
1. Primeiramente o programa dever pedir os números para o usuário.

2. Depois disso o programa dever verificar se o número e par ou impar.

3. Essa informação é obtida através do resto por 2 se o resultado for 0 então o número é par caso contrário é impar.

4. Retornar a resposta para o usuário.

###### CÓDIGO 02
```c
// Importação das bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca para definir o local
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Definindo o local
    int par[11],impar[11],numero,contador[2];
    contador[0] = contador[1] = numero = 0; // Iniciando as variaveis com valor 0
    system("clear");
    for (int i = 0;i <10;i++){ // Solicitando os 10 números ao usuário
        printf("Digite um número(%i): \n",i+1);
        scanf("%d",&numero);
        if (numero%2 == 0){ // Verificar se numero é par e caso seja guardar no vetor par e adicionar 1 ao contador de números
            par[contador[0]] = numero;
            contador[0] += 1;
        }else if(numero%2 != 0){ // Verificar se numero é impar e caso seja guardar no vetor impar e adicionar 1 ao contador de números
            impar[contador[1]] = numero;
            contador[1] += 1;
        }
    }
    system("clear");
    if(contador[0] > 1 && contador[1] > 1 ){ // Verificar a quantidade de cada contador para mostrar a quantidade de números par e impar achado
        printf("\nSão %i números pares e %i números impar.\nPAR: ",contador[0],contador[1]);
    }else if(contador[0] > 1 && contador[1] == 1){
        printf("São %i números pares e %i número impar.\nPAR: ",contador[0],contador[1]);
    }else if(contador[0] == 1 && contador[1] > 1){
        printf("São %i número par e %i números impar.\nPAR: ",contador[0],contador[1]);
    }
    for(int i = 0; i < contador[0];i++){ // Mostrar os números contidos no vetor par.
        printf("| %i | ",par[i]);
    }
    printf("\nIMPAR: ");
    for(int i = 0; i < contador[1];i++){// Mostrar os números contidos no vetor impar.
        printf("| %i | ",impar[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}
```
###### EXEMPLO DE SAÍDA 02
[![](https://github.com/gabrielfreitassouza/Trabalho/blob/master/IMAGENS/02EX.png?raw=true)](https://github.com/gabrielfreitassouza/Trabalho/blob/master/IMAGENS/02EX.png?raw=true)

[EXECUTAR CÓDIGO](https://replit.com/@gabrielfreitass/TB02EXERCICIO2 "EXECUTAR CÓDIGO")
