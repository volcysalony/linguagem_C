#include <stdio.h>

int main() {

    int opcao;

    while (1) {

        printf("\n===== MENU =====\n");
        printf("1 - Dizer Ola\n");
        printf("2 - Mostrar numero par ou impar\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("\nOla! Seja bem-vindo(a).\n");
                break;

            case 2: {

                int numero;

                printf("\nDigite um numero: ");
                scanf("%d", &numero);

                // Verifica se o numero e par ou impar
                if (numero % 2 == 0) {
                    printf("O numero %d e PAR.\n", numero);
                }
                else {
                    printf("O numero %d e IMPAR.\n", numero);
                }

                break;
            }

            case 3:
                printf("\nEncerrando o programa...\n");
                return 0;

            default:
                printf("\nOpcao invalida!\n");
        }
    }
}