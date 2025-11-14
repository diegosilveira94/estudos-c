#include <stdio.h>

void selectionSort(int *v, int tam)
{
    int i, j, menor;

    for (i = 0; i < tam; i++)
    {
        menor = i;

        for (j = i + 1; j < tam; j++)
            if (v[j] < v[menor])
                menor = j;

        int aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
}

#define TAM 10

int main()
{
    int numeros[TAM] = {14, 3, 19, 7, 1, 12, 20, 6, 9, 17};

    printf("Antes do Selection Sort\n");
    for (int i = 0; i < TAM; i++)
        printf("%d - ", numeros[i]);

    selectionSort(numeros, TAM);

    printf("\n\nDepois do Selection Sort\n");
    for (int i = 0; i < TAM; i++)
        printf("%d - ", numeros[i]);

    return 0;
}
