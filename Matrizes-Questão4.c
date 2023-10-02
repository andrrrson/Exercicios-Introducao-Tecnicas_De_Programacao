#include <stdio.h>

int calcular_aposta(int largura, int altura, int bandeira[altura][largura], char cor){
    int i, j, aux=largura/3, cont,aux1,aux2,aux3;
    int valor=0;


    aux1= aux;
    aux2 = aux1+aux;
    aux3 = aux2+aux;

    if (cor == 'G')
    {
    for (i = 0; i < altura; i++)
    {
        for (j = 0; j < largura; j++)
        {
            if (j < aux1)
            {
                valor += bandeira[i][j];
            }
        }
    }return valor;} 
    

    if(cor == 'Y') {
    for (i = 0; i < altura; i++)
    {
        for (j = 0; j < largura; j++)
        {
            if (j>=aux1 && j<aux2)
            {
                valor += bandeira[i][j];
            }
        }
        
    }return valor;}
    
    
    if(cor == 'R')
    {
    for (i = 0; i < altura; i++)
    {
        for (j = 0; j < largura; j++)
        {
            if (j>=aux2 && j<aux3)
            {
                valor += bandeira[i][j];
            }
        }
        
    
    }return valor;}
    

}

int main(){
    int largura, n, altura, i, j, aux1, aux2,aux3;
    char cor;


    scanf("%d %d %c", &largura, &n, &cor);

    altura= (2 * largura) / 3;
    n++;
    
    int div=largura/3;

    aux1= div;
    aux2 = aux1+div;
    aux3 = aux2+div;

    int bandeira[altura][largura];

    for (i = 0; i < altura; i++)
    {
        for (j = 0; j < largura; j++)
        {
            if (j < aux1)
            {
                bandeira[i][j] = n;
            }
            else if(j>=aux1 && j<aux2)
            {
                bandeira[i][j] = n+1;
            }
            else if(j>=aux2 && j<aux3)
            {
                bandeira[i][j] = n+2;
            }
        }
    }

    int aposta = calcular_aposta(largura, altura, bandeira, cor);
    printf("%d", aposta);

    return 0;
}