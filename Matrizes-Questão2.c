#include <stdio.h>

int main (){
    int n, i, j, aux1, aux2;

    scanf("%d", &n);

    int piramide[n][n];

    aux1 = 1;
    aux2 = n;

    for(i = 0; i <n; i++)
    {
        for (j = 0; j < n; j++)
        {
            piramide[i][j] = 1;
        }
    }

    if(n %2 != 0)
    {
    do{
        for (i = 0; i < n; i++)
        {
            for (j = 0; j <n; j++)
            {
                if ((i+1)>aux1 && (i+1)<aux2 && (j+1)>aux1 && (j+1)<aux2)
                {
                    piramide[i][j] ++;
                }
        }
        }
        aux1++;
        aux2--;
    } while (aux1!=aux2);
    }

    else{
        
    do{
        for (i = 0; i < n; i++)
        {
            for (j = 0; j <n; j++)
            {
                if ((i+1)>aux1 && (i+1)<aux2 && (j+1)>aux1 && (j+1)<aux2)
                {
                    piramide[i][j] ++;
                }
        }
        }
        aux1++;
        aux2--;
    } while ((aux2-aux1)!=1);
    }


    for(i = 0; i <n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ",piramide[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}