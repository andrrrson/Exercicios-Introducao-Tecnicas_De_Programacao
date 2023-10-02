#include <stdio.h>

int main(){
    int n, m, entrada, n_de_elementos, i;
    
    scanf("%d %d", &n, &m);

    if (n<=0 || n>=50 || m<=0 || m>=50)
    {
        printf ("n deve estar entre o intervalo 0<n<50 e m entre 0<m<50");
    }
    
    n_de_elementos = m + n;
    int conj_universo[9];

    for (i = 0; i < 10; i++)
    {
        conj_universo[i] = 0;
    }

    for(i=0; i < n_de_elementos; i++)
    {
        scanf("%d", &entrada);
        conj_universo[entrada] ++;
    }

    for (i = 0; i < 10; i++)
    {
        if (conj_universo[i] == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}