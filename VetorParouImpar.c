#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int pares = 0;
    int impares = 0;
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++) {
        if(vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\n--- Resultado ---\n");
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n\n", impares);

    system("pause");

    return 0;
}
