#include <stdio.h>
#include <stdlib.h>

void insertionSort(int array[], int n) {
    for (int i = 1; i < n; i++) {
        int element = array[i];
        int j = i;
        while (j > 0 && array[j - 1] > element) {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = element;
    }
}

int main() {
    int n;
    
    if (scanf("%d", &n) != 1) {
        printf("Erro ao ler o tamanho do array.\n");
        return 1;
    }

    int *data = (int *)malloc(n * sizeof(int));
    if (data == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    // 3. Lê os n elementos do arquivo
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    // 4. Executa a ordenação
    insertionSort(data, n);

    printf("Primeiros 10 elementos ordenados:\n");
    for (int i = 0; i < 10 && i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    free(data);

    return 0;
}