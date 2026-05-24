#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1[10];
    int v2[10];
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &v1[i]);
    }

    for(i = 0; i < 10; i++) {
        v2[i] = v1[9 - i];
    }

    printf("\n--- Vetor 1 (Original) ---\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", v1[i]);
    }

    printf("\n\n--- Vetor 2 (Invertido) ---\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n\n");

    system("pause");

    return 0;
}