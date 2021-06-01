#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ANSI-color-codes.h" // https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a
//PROTOTYPE
void espera(){
      color(HYEL);
      printf("Precione ENTER para continuar...",getchar());
      getchar();
}
void calcularFatorial();
//FUNÇÕES
int main(){ //MENU
    setlocale (LC_ALL, "pt_BR.UTF-8");
    int opcao = 0;
    do{
        system("clear");
        color(BHBLU);
        printf("===================== MENU ========================\n");
        printf("    1 - Fatorial de um número                      \n");
        printf("    2 - Números pares/impares                      \n");
        printf("    3 - Maior número de um conjunto                \n");
        printf("    4 - Mais velho/novo                            \n");
        printf("    5 - Soma PA                                    \n");
        printf("    0 - Sair                                       \n");
        printf( "===================================================\n" reset);
        printf(BHGRN "--> " );
        scanf("%i", &opcao); 
        system("clear");
        switch(opcao){
            case 0:
                break;
            case 1:
                calcularFatorial();
                espera();
                break;
            case 2:
                printf("");
                break;
            case 3:
                printf("");
                break;
            case 4:
                printf("");
                break;
            case 5:
                printf("");
                break;
            default:
                color(HRED);
                printf("Opçao(%i) Inválida !! \n",opcao);
                espera();
                break;
        };
    }while(opcao != 0);
}
void calcularFatorial() {
    int numero,resultado;
    resultado = numero = 0;
    printf("Digite um numero: \n");
    printf("--> ");
    scanf("%d",&numero);
    for(resultado = 1; numero > 1; numero-=1)
        resultado *= numero;
    printf("Resultado: %i \n",resultado);
}