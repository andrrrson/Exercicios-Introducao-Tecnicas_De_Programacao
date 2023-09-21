#include <stdio.h>

void verifica_legal_ou_chato (int tam, int* vet){
    int contador, i, j, subtracao=0, esp;
    contador =0;

    for (i = 0; i < (tam-1); i++)
    {
        for (j = (i+1);j <= (i+1); j++ )
        {
            subtracao = vet[j] - vet[i];
            
            if (subtracao % 2 !=0)
            {
                contador++ ;
                
            }
            
        }
    }
    

    if (contador > 0)
    {
        printf("Chato\n");
    }
    else
    {
        printf("Legal\n");
    }
}

int main(){
    int n, i;
    
    scanf("%d", &n);

    int vetor[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    verifica_legal_ou_chato (n,vetor);
    

    return 0;
}