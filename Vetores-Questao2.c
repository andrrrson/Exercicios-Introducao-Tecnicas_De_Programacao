#include <stdio.h>

void organizador(int n, int* vet1, int* vet2 ){
    int i, contador = 0;
    for (i = 0; i < n; i++)
    {
        if (vet2[i] >= 7.0 && contador == 0)
        {
            contador++;
            printf(" %d (%.1lf)", vet1[i], vet2[i]);
        }
        else if (vet2[i] >= 7.0 && contador != 0)
        {
            printf(", %d (%.1lf)", vet1[i], vet2[i]);
        }
    }





}

int main()
{
    int n, nota, i, contador;

    scanf("%d", &n);

    int alunos[n];
    double notas[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d - %lf", &alunos[i], &notas[i]);
    }

    // CONJUNTO DOS APROVADOS
    contador = 0;
    printf("Aprovados:");
    for (i = 0; i < n; i++)
    {
        if (notas[i] >= 7.0 && contador == 0)
        {
            contador++;
            printf(" %d (%.1lf)", alunos[i], notas[i]);
        }
        else if (notas[i] >= 7.0 && contador != 0)
        {
            printf(", %d (%.1lf)", alunos[i], notas[i]);
        }
    }

    // RECUPERAÇÃO

    printf("\nRecuperação:");
    for (i = 0; i < n; i++)
    {
        if (notas[i] >= 5.0 && notas[i] < 7.0 && contador == 0)
        {
            contador++;
            printf(" %d (%.1lf)", alunos[i], notas[i]);
        }
        else if (notas[i] >= 5.0 && notas[i] < 7.0 && contador != 0)
        {
            printf(", %d (%.1lf)", alunos[i], notas[i]);
        }
    }

    // REPROVADOS
    contador = 0;
    printf("\nReprovados:");
    for (i = 0; i < n; i++)
    {
        if (notas[i] < 5.0 && contador == 0)
        {
            contador++;
            printf(" %d (%.1lf)", alunos[i], notas[i]);
        }
        else if (notas[i] < 5.0 && notas[i] <= 7.0 && contador != 0)
        {
            printf(", %d (%.1lf)", alunos[i], notas[i]);
        }
    }

    return 0;
}