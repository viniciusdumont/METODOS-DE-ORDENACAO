#include <stdio.h>

int main() {
	
    int numeros[5];
    int i, j, chave;

    printf("Digite 5 numeros:\n\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros antes da ordenacao:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    for (i = 1; i < 5; i++) {
        chave = numeros[i];
        j = i - 1;

        while (j >= 0 && numeros[j] > chave) {
            numeros[j + 1] = numeros[j];
            j--;
        }
        numeros[j + 1] = chave;
    }

    printf("\n\nNumeros apos a ordenacao:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
