#include <stdio.h>

int main() {
	
    int numeros[5], i, j, minIndex, temp;

    printf("Digite 5 numeros:\n\n");
    for (i = 0; i < 5; i++) {
    	printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros antes da ordenacao:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    for (i = 0; i < 4; i++) {
        minIndex = i;
        for (j = i + 1; j < 5; j++) {
            if (numeros[j] < numeros[minIndex]) {
                minIndex = j;
            }
        }
        
        temp = numeros[i];
        numeros[i] = numeros[minIndex];
        numeros[minIndex] = temp;
    }

    printf("\n\nNumeros apos a ordenacao:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

return 0;
}
