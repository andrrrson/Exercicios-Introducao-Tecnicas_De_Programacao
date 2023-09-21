#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Solicita o número de alunos na turma
    printf("Digite o número de alunos da turma: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número inválido de alunos.\n");
        return 1;
    }

    // Aloca memória para os vetores de alunos aprovados, em recuperação e reprovados
    int *aprovados = (int *)malloc(sizeof(int) * n);
    int *recuperacao = (int *)malloc(sizeof(int) * n);
    int *reprovados = (int *)malloc(sizeof(int) * n);

    if (aprovados == NULL || recuperacao == NULL || reprovados == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Inicializa contadores para cada lista
    int aprovadosCount = 0;
    int recuperacaoCount = 0;
    int reprovadosCount = 0;

    // Lê as médias finais dos alunos e classifica-os
    for (int i = 0; i < n; i++) {
        int numeroAluno;
        float mediaFinal;

        printf("Digite o número do aluno %d e sua média final: ", i + 1);
        scanf("%d %f", &numeroAluno, &mediaFinal);

        if (mediaFinal >= 7.0) {
            aprovados[aprovadosCount] = numeroAluno;
            aprovadosCount++;
        } else if (mediaFinal >= 5.0) {
            recuperacao[recuperacaoCount] = numeroAluno;
            recuperacaoCount++;
        } else {
            reprovados[reprovadosCount] = numeroAluno;
            reprovadosCount++;
        }
    }

    // Imprime a lista de alunos aprovados
    printf("Alunos Aprovados:\n");
    for (int i = 0; i < aprovadosCount; i++) {
        printf("%d (%.1f)\n", aprovados[i], 7.0);
    }

    // Imprime a lista de alunos em recuperação
    printf("Alunos em Recuperação:\n");
    for (int i = 0; i < recuperacaoCount; i++) {
        printf("%d (%.1f)\n", recuperacao[i], 5.0);
    }

    // Imprime a lista de alunos reprovados
    printf("Alunos Reprovados:\n");
    for (int i = 0; i < reprovadosCount; i++) {
        printf("%d (%.1f)\n", reprovados[i], 0.0);
    }

    // Libera a memória alocada
    free(aprovados);
    free(recuperacao);
    free(reprovados);

    return 0;
}
