#include <stdio.h>

int main() {
	
    int vet[5];
    int i, j, temp;

    printf("DIGITE 5 NUMEROS:\n\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("\nNumeros antes da ordenacao:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }

    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }

    printf("\n\nNumeros apos a ordenacao:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }

    printf("\n");
    
    
return 0;
}

