#include <stdio.h>

void selectionSort(float *v, int tam)
{
    int i, j, menor;

    for (i = 0; i < tam; i++)
    {
        menor = i;

        for (j = i + 1; j < tam; j++)
            if (v[j] < v[menor])
                menor = j;

        float aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
}

int main()
{
    int n;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);
    printf("");

    float notas[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nDigite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("\nNotas SEM Ordenacao\n");
    for (int i = 0; i < n; i++)
        printf("%.2f - ", notas[i]);

    printf("\nNotas COM Ordenacao\n");
    selectionSort(notas, n);
    for (int i = 0; i < n; i++)
        printf("%.2f - ", notas[i]);

    return 0;
}
