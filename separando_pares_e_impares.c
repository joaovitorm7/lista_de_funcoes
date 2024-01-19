#include <stdio.h>

void separarParesImpares(int numeros[], int tamanho) {
    printf("Pares: ");
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\nÍmpares: ");
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\n");
}

int main() {
    int tamanhoLista;

    printf("Informe o tamanho da lista: ");
    scanf("%d", &tamanhoLista);

    int numeros[tamanhoLista];

    printf("Digite os numeros da lista:\n");
    for (int i = 0; i < tamanhoLista; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    separarParesImpares(numeros, tamanhoLista);

    return 0;
}
