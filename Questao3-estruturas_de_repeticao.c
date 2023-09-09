#include <stdio.h>

int main(){
    float tempo_max,tempo_individual;
    int contador, series;

    series = 0;
    contador = 0;

    scanf("%f", &tempo_max);
    while (tempo_individual != -1)
    {
        scanf("%f", &tempo_individual);
        if (tempo_individual <= tempo_max && tempo_individual != -1)
        {
            contador++;
        }
    } 

    series = (contador+7) / 8;
    
    if(series < 1){
        printf("%d 0\n", contador);
    }
    else
    {
        printf("%.0d %d\n", contador, series);
    }
    
    return 0;
}