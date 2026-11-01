#include <stdio.h>

int main(void) {
    double numero1, numero2;
    int opcao;

    printf("===== CALCULADORA EM C =====\n");

    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("\nEscolha uma operacao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &numero2);

    if (opcao == 1) {
        printf("Resultado: %.2f\n", numero1 + numero2);
    }
    else if (opcao == 2) {
        printf("Resultado: %.2f\n", numero1 - numero2);
    }
    else if (opcao == 3) {
        printf("Resultado: %.2f\n", numero1 * numero2);
    }
    else if (opcao == 4) {
        if (numero2 != 0) {
            printf("Resultado: %.2f\n", numero1 / numero2);
        }
        else {
            printf("Erro: divisao por zero!\n");
        }
    }
    else {
        printf("Operacao invalida!\n");
    }

    return 0;
}
