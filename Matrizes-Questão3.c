#include <stdio.h>

void alguemVenceu(int lin, int col,char matriz[lin][col]){
    int i, j, cont=0;
    //LINHAS E COLUNAS
        for (i = 0; i < 3; i++) {
            if ((matriz[i][0] == 'X' || matriz[i][0] == 'O') && matriz[i][0] == matriz[i][1] && matriz[i][1] ==  matriz[i][2])
            {
                cont ++;
            }
            else if ((matriz[0][i] == 'X' || matriz[0][i] == 'O') &&matriz[0][i] == matriz[1][i] && matriz[1][i] ==matriz[2][i])
            {
                cont++;
            }
            }

    //DIAGONAIS
            if (((matriz[0][0]== 'X' || matriz[0][0] == 'O') && matriz[0][0] == matriz[1][1]  &&  matriz[1][1] == matriz[2][2]) ||
                ((matriz[0][2] == 'X' || matriz[0][2] =='O') && matriz[0][2] == matriz[1][1]  &&  matriz[1][1] == matriz[2][0]))
            {
                cont ++;
            }

            if (cont !=0)
            {
                printf("Boa jogada, vai vencer!\n");
            }
            if (cont == 0)
            {
                printf("Continua o jogo.\n");
            }
}

int main() {
    char tabuleiro[3][3];
    char simb, est_anterior;
    int i, j, x, y, n;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf(" %c", &tabuleiro[i][j]);
        }
    }
    
    scanf("%d", &n);

    for (int k = 0; k < n; k++) {
        x = y = 0;
        
        scanf("%d %d %c", &x, &y, &simb);
        
        est_anterior=tabuleiro[x-1][y-1];
        tabuleiro[x-1][y-1]=simb;

        if (est_anterior =='X' || est_anterior =='O')
        {
            printf("Jogada inválida!\n");
            
        }
        else {
            
            // Verificar se alguém venceu nas linhas, colunas e diagonais

            alguemVenceu (3,3,tabuleiro);
            
        }
        tabuleiro[x-1][y-1]= est_anterior;
    }

    return 0;
}