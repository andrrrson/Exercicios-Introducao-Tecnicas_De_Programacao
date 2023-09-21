#include <stdio.h>

void bubble_sort(int n, int* vet) {
    int troca;
    
    do {
        troca = 0;
        
        for (int i = 1; i < n; i++) {
            if (vet[i - 1] > vet[i]) {
                
                int temp = vet[i - 1];
                vet[i - 1] = vet[i];
                vet[i] = temp;
                
                troca = 1;
            }
        }
        
        
        if (troca) {
            for (int i = 0; i < n; i++) {
                printf("%d ", vet[i]);
            }
            printf("\n");
        }
    } while (troca);
}

int main(){
    int n, i, aux;

    scanf("%d", &n);

    int vetor[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");


    bubble_sort(n, vetor);


    return 0;
}