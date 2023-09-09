#include <stdio.h>

int main(){
    int numero, linhas, metade, i, j, z, contador1, contador2;
    char letra;

    scanf("%d  %c", &numero, &letra);
    linhas = numero - 1;
    contador1 = 0;
    metade = linhas /2;
    contador2 = 0;
    
    if (numero <= 0)
    {
        printf("Erro");
    }

    //SE O NÚMERO DE LINHAS FOR PAR
    if (linhas %2 == 0)
    {   
        //PARTE SUPERIOR
        for (i = 0; i < metade ; i++)
    {  
        if (contador1 != 0)
        {
            for (j = 0; j < contador1; j++)
            {
            printf(" ");
            } 
        }
        contador1++;
        printf("%c", letra);
            
        for (z = 0; z < (metade - contador1); z++)
        {
            printf("  ");
        }
        printf("%c\n", letra);
    }
        //PARTE INFERIOR
    
        for (i = metade; i >= 1; i--) 
        {
            for (j = 0; j < (i-1); j++)
            {
                printf(" ");
            }
        
            printf("%c", letra);
            for (z = 0; z < (metade - contador1); z++)
            {
              printf("  ");
            }
            contador1--;
            printf("%c\n", letra);
        }
    }
    //SE O NÚMERO DE LINHAS FOR IMPAR
    else
    {
        //PARTE SUPERIOR
        contador2= linhas-2;
        for (i = 0; i < metade; i++)
        {
            if (contador1 != 0)
        {
            for (j = 0; j < contador1; j++)
            {
            printf(" ");
            } 
        }
            contador1++;
            printf("%c", letra);
            
            for (z = 0; z < contador2; z++)
        {
            printf(" ");
        }
        contador2--;
        contador2--;
        printf("%c\n", letra);
        }

        //MEIO
        for (i = 0; i <= j; i++)
        {
            printf(" ");
        }
        printf("%c\n", letra);

        //PARTE INFERIOR
        contador2 = 1;
        for (i = metade; i >= 1; i--)
        {
            
            for (j = 0; j < (i-1); j++)
            {
                printf(" ");
            }
        
            printf("%c", letra);
            for (z = 0; z < contador2; z++)
            {
              printf(" ");
            }
            contador2++;
            contador2++;
            printf("%c\n", letra);
        }
        
    }
    
    return 0;

    }