#include <stdio.h>
#include <stdlib.h>

int main() {
    float vetor[10];
    float soma = 0.0;
    float media = 0.0;
    int i;

    printf("Digite 10 numeros:\n");
    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for(i = 0; i < 10; i++) {
        soma += vetor[i];
    }

    media = soma / 10;

    printf("\n--- Resultado ---\n");
    printf("A media dos valores informados eh: %.2f\n\n", media);

    system("pause");

    return 0;
}