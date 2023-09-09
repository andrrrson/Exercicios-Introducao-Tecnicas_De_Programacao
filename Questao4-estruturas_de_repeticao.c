#include <stdio.h>

int main()
{
    int equipes, C, S, L, soma;
    char prova;
    int i;

    C = 0;
    S = 0;
    L = 0;

    scanf("%d", &equipes);

    for (i = 0; i < equipes; i++)
    {
        do
        {
            scanf(" %c", &prova);
            switch (prova)
            {
            case 'C':
                C++;
                break;
            case 'S':
                S++ ; break;
            case 'L':
                L++ ; break;
            }
        } while (prova != 'F');
        
 
    } 
    soma = C + S + L;
    printf("%d %d %d %d", C, S, L, soma);

    return 0;
}