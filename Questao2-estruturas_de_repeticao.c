#include <stdio.h>

int main(){
    int numero, contador1, contador2, i, j;

    contador1 = 1;
    contador2 = 0;
    scanf("%d", &numero);

    if (numero <= 0){
        printf("Você entrou com %d, tente de novo na próxima\n", numero);
    }
    
    for (i = 1; i <= numero; i++)
    {
        contador2++;
        for (j = 0; j < contador2; j++)
        {  
            if (contador1 <= 9)
            {
                printf("%2.d ", contador1);
                contador1++;
            }
            else
            {
                printf("%d ", contador1);
                contador1++;
            }

        }
        printf("\n");
    }

    
    return 0;
}