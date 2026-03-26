#include <stdio.h>
#include <stdlib.h>

void selectionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        
        if (min != i) {
            int temp = array[min];
            array[min] = array[i];
            array[i] = temp;
        }
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

    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

   
    selectionSort(data, n);

    printf("Primeiros 10 elementos ordenados (Selection Sort):\n");
    for (int i = 0; i < 10 && i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    free(data);

    return 0;
}