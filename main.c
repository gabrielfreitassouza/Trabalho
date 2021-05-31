#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ANSI-color-codes.h"
//PROTOTYPE
void corTexto (int cor);
void calcularFatorial();
//FUNÇÕES
void main(){ //MENU
    system("clear");
    setlocale (LC_ALL, "pt_BR.UTF-8");
    int opcao = 0;
    do{
        printf(BLUB "===================== MENU ========================\n");
        printf("    1 - Fatorial de um número                      \n");
        printf("    2 - Números pares/impares                      \n");
        printf("    3 - Maior número de um conjunto                \n");
        printf("    4 - Mais velho/novo                            \n");
        printf("    5 - Soma PA                                    \n");
        printf("    0 - Sair                                       \n");
        printf( "===================================================\n");
        printf(reset "--> ");
        scanf("%i", &opcao); 
        system("clear");
        switch(opcao){
            case 0:
                break;
            case 1:
                calcularFatorial();
                getchar();
                system("clear");
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
                printf("Opçao(%i) Inválida !! \n",opcao);
                getchar();
                system("clear");
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