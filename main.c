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
        color(BHRED);
        printf("\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\tMENU\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\n");
        color(BHBLU);
        printf("    \U0001F7E61 -> Fatorial de um número                      \n");
        printf("    \U0001F7E62 -> Números pares/impares                      \n");
        printf("    \U0001F7E63 -> Maior número de um conjunto                \n");
        printf("    \U0001F7E64 -> Mais velho/novo                            \n");
        printf("    \U0001F7E65 -> Soma PA                                    \n");
        printf("    \U0001F7E60 -> Sair                                       \n");
        printf( "\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\U0001F53B\U0001F53A\n");
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