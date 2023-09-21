#include <stdio.h>

int ehPar(int numero){
    if (numero %2 == 0 )
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
}

int main(){
    int numero;
    scanf("%d", &numero);

    ehPar(numero);
    
    return 0;
}