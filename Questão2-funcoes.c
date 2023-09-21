#include <stdio.h>

// Retorna verdadeiro se numero é divisível por divisor e falso em caso contrário
int testa_divisor(int numero, int divisor) {
    if (numero % divisor == 0){
        return 1;
    }
    else
    {
        return 0;
    }
    
}

// Retorna a soma dos divisores de value no intervalo [1, value)
int soma_divisores(int value) {
    int soma = 0;
    for (int i = 1; i < value; i++) {
        if (testa_divisor(value, i)) {
            soma += i;
        }
    }
    return soma;
}

// Retorna verdadeiro se a é amigo de b, falso em caso contrário
int testa_amigos(int a, int b) {
    if ( a != b && soma_divisores(a) == b && soma_divisores(b) == a)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int main() {
    int A, B, C, D, contador;

    // Solicita os valores dos intervalos L1 e L2
    printf("Digite o intervalo L1 (A B): ");
    scanf("%d %d", &A, &B);
    printf("Digite o intervalo L2 (C D): ");
    scanf("%d %d", &C, &D);

    // Verifica e imprime os amigos entre L1 e L2
    contador = 0;
    for (int i = A; i <= B; i++) {
        for (int j = C; j <= D; j++) {
            if (testa_amigos(i, j )== 1) {
                printf("O %d possui um amigo!\n", i);
                contador++;
            }
            }
        }
    if (contador ==0)
    {
        printf("Os intervalos nao apresentam amigos!\n");
    }
        
    return 0;
    }

