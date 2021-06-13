// Importação das bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca para definir o local
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Definindo o local
    int par[11],impar[11],numero,contador[2];
    contador[0] = contador[1] = numero = 0; // Iniciando as variaveis com valor 0
    system("clear || cls");
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
    system("clear || cls");
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
