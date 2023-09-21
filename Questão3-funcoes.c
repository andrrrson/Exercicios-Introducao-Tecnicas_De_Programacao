#include <stdio.h>



int main(){
    int numero, aux, n_de_verificacoes, contador, i;

    scanf("%d", &n_de_verificacoes);
    

    for (i = 0; i < n_de_verificacoes; i++)
    {
        scanf("%d", &numero);
        for (i = 1; i < numero; i++)
        {
            aux = numero %i ;
            contador = 0 ;

            if (aux == 0)
            {
                contador+= i ;
            }
        }
        if (contador== numero)
        {
            
            printf("%d eh perfeito\n", numero);
        }
        else
        {
            printf("%d nao eh perfeito\n", numero);
            
        }
        
        
    }
    

    return 0;
}

