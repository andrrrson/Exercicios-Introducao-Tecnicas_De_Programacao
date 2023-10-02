#include <stdio.h>

int main(){
    char letra;
    int qntd;
    float porcent;
    float multplicacao;

    scanf(" %c", &letra);
    scanf("%d %f", &qntd, &porcent);

    multplicacao= qntd*porcent;

    printf("A popularidade de %c é %.1f", letra, multplicacao);

    return 0;
}