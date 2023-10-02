#include <stdio.h>

int main(){
    int M, N, i, j, n_caracteres, porc_agua, porc_deser, porc_veg;
    char agua, esp_hos, deser, veg, rec_nat;

    agua= esp_hos= deser= veg= rec_nat = 0;
    
    scanf("%d %d", &N, &M);

    char matriz[N][M];

    n_caracteres = N * M;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf(" %c", &matriz[i][j]);
        }
    }
    
    
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            switch (matriz[i][j])
            {
            case '~': agua++; break;
            case 'X': esp_hos++; break;
            case '^': deser ++; break;
            case '*': veg ++; break;
            case '.': rec_nat++; break;
            }
        }
    }

    porc_agua = (agua * 100) / n_caracteres;
    porc_deser = (deser * 100) / n_caracteres;
    porc_veg = (veg * 100) / n_caracteres;

    if (esp_hos >= 1) {
        printf("Planeta Hostil\n");
    }
    else if (porc_agua >= 50 && porc_veg >= 20) {
        printf("Planeta Classe M\n");
    }
    else if (porc_agua >= 85) {
        printf("Planeta Aquático\n");
    }
    else if (porc_deser >= 60) {
        printf("Planeta Desértico\n");
    }
    else if (porc_veg >= 65)
    {
        printf("Planeta Selvagem\n");
    }
    else {
        printf("Planeta Inóspito\n");
    }

    return 0;
}