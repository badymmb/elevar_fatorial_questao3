#include <stdio.h>
#include "funcoes.h"

double num = 0;
int expoente = -1, opcao;

int main(int argc, char *argv[]) {
    while(num<=0){
        printf("Digite um numero maior que zero\n");
        scanf("%lf", &num);
    }

    printf("\n\n\nEscolha uma das opcoes:\n1 - Fatorial\n2 - Elevado\n");
    scanf("%d", &opcao);

    switch(opcao) {
    case 1:
        printf("Fatorial de %.2lf = %.2lf\n", num, fatorial(num));
        break;

    case 2:
        while (expoente < 0) {
            printf("Digite um expoente maior ou igual a zero\n");
            scanf("%d", &expoente);
        }

        printf("\n%.2lf elevado a %d = %.2lf\n",
               num, expoente, elevar(num, expoente));
        break;

    default:
        printf("\nOpcao invalida\n");
    }
    return 0;
}
