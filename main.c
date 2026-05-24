#include <stdio.h>

int main() {

    float nota;

    printf("Informe a sua nota:\n");
    scanf("%f", &nota);

    printf("\nA sua nota e: %.1f\n", nota);

    // Verifica se o aluno foi aprovado
    if (nota >= 7.0) {
        printf("Voce esta aprovado(a)!\n");
    }
    else {
        printf("Voce esta reprovado(a)!\n");
    }

    return 0;
}