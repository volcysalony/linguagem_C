#include <stdio.h>

int main() {

    int opcao;
    float num1, num2, resultado;

    while (1) {

        printf("\n===== CALCULADORA =====\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        // Encerra o programa
        if (opcao == 5) {
            printf("\nCalculadora encerrada.\n");
            break;
        }

        // Verifica se a opcao e valida
        if (opcao < 1 || opcao > 5) {
            printf("\nOpcao invalida!\n");
            continue;
        }

        printf("\nDigite o primeiro numero: ");
        scanf("%f", &num1);

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        switch (opcao) {

            case 1:
                resultado = num1 + num2;
                printf("\nResultado: %.2f\n", resultado);
                break;

            case 2:
                resultado = num1 - num2;
                printf("\nResultado: %.2f\n", resultado);
                break;

            case 3:
                resultado = num1 * num2;
                printf("\nResultado: %.2f\n", resultado);
                break;

            case 4:

                // Verifica divisao por zero
                if (num2 == 0) {
                    printf("\nErro: divisao por zero!\n");
                }
                else {
                    resultado = num1 / num2;
                    printf("\nResultado: %.2f\n", resultado);
                }

                break;
        }
    }

    return 0;
}